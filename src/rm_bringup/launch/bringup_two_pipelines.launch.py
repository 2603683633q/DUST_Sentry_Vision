import os
import sys
import yaml
from ament_index_python.packages import get_package_share_directory
from launch.substitutions import Command


def generate_launch_description():

    from launch_ros.descriptions import ComposableNode
    from launch_ros.actions import ComposableNodeContainer, Node
    from launch.actions import TimerAction, Shutdown
    from launch import LaunchDescription

    launch_params = yaml.safe_load(open(os.path.join(
        get_package_share_directory('rm_bringup'), 'config', 'launch_params.yaml')))

    node_params = os.path.join(
        get_package_share_directory('rm_bringup'), 'config', 'node_params.yaml')

    # Pipeline 0 (first camera)
    cam0_node = ComposableNode(
        package='hik_camera_first',
        plugin='hik_camera::HikCameraNode',
        name='hik_camera_0',
        parameters=[node_params],
        extra_arguments=[{'use_intra_process_comms': True}],
    )

    detector0_node = ComposableNode(
        package='armor_detector',
        plugin='rm_auto_aim::ArmorDetectorNode',
        name='armor_detector_first',
        parameters=[node_params, {
            'dual_camera': False,
            'image_topic_first': '/image_raw_first',
            'armors_topic': '/detector_first/armors'
        }],
        remappings=[
            ('/detector/result_img', '/detector/result_img_first'),
            ('/detector/binary_img', '/detector/binary_img_first'),
            ('/detector/number_img', '/detector/number_img_first'),
            ('/detector/debug_armors', '/detector/debug_armors_first'),
        ],
        extra_arguments=[{'use_intra_process_comms': True}],
    )

    container0 = ComposableNodeContainer(
        name='pipeline_container_0',
        namespace='',
        package='rclcpp_components',
        executable='component_container_mt',
        composable_node_descriptions=[cam0_node, detector0_node],
        output='both',
        emulate_tty=True,
    )

    # Pipeline 1 (second camera)
    cam1_node = ComposableNode(
        package='hik_camera_second',
        plugin='hik_camera::HikCameraNode',
        name='hik_camera_1',
        parameters=[node_params],
        extra_arguments=[{'use_intra_process_comms': True}],
    )

    detector1_node = ComposableNode(
        package='armor_detector',
        plugin='rm_auto_aim::ArmorDetectorNode',
        name='armor_detector_second',
        parameters=[node_params, {
            'dual_camera': False,
            'image_topic_first': '/image_raw_second',
            'armors_topic': '/detector_second/armors'
        }],
        remappings=[
            ('/detector/result_img', '/detector/result_img_second'),
            ('/detector/binary_img', '/detector/binary_img_second'),
            ('/detector/number_img', '/detector/number_img_second'),
            ('/detector/debug_armors', '/detector/debug_armors_second'),
        ],
        extra_arguments=[{'use_intra_process_comms': True}],
    )

    container1 = ComposableNodeContainer(
        name='pipeline_container_1',
        namespace='',
        package='rclcpp_components',
        executable='component_container_mt',
        composable_node_descriptions=[cam1_node, detector1_node],
        output='both',
        emulate_tty=True,
    )

    # Tracker and solver for pipeline 0 (remap topics so each pipeline is isolated)
    tracker0 = Node(
        package='armor_tracker',
        executable='armor_tracker_node',
        name='armor_tracker_first',
        output='both',
        emulate_tty=True,
        parameters=[node_params],
        remappings=[('/detector/armors', '/detector_first/armors'),
                    ('/tracker/target', '/tracker_first/target'),
                    ('/tracker/marker', '/tracker_first/marker')],
        ros_arguments=['--log-level', 'armor_tracker:='+launch_params['tracker_log_level']],
    )

    solver0 = Node(
        package='armor_solver',
        executable='armor_solver_node',
        name='armor_solver_first',
        output='both',
        emulate_tty=True,
        parameters=[node_params],
        remappings=[('tracker/target', '/tracker_first/target')],
        ros_arguments=['--log-level', 'armor_solver:='+launch_params['solver_log_level']],
    )

    # Tracker and solver for pipeline 1
    tracker1 = Node(
        package='armor_tracker',
        executable='armor_tracker_node',
        name='armor_tracker_second',
        output='both',
        emulate_tty=True,
        parameters=[node_params],
        remappings=[('/detector/armors', '/detector_second/armors'),
                    ('/tracker/target', '/tracker_second/target'),
                    ('/tracker/marker', '/tracker_second/marker')],
        ros_arguments=['--log-level', 'armor_tracker:='+launch_params['tracker_log_level']],
    )

    solver1 = Node(
        package='armor_solver',
        executable='armor_solver_node',
        name='armor_solver_second',
        output='both',
        emulate_tty=True,
        parameters=[node_params],
        remappings=[('tracker/target', '/tracker_second/target')],
        ros_arguments=['--log-level', 'armor_solver:='+launch_params['solver_log_level']],
    )

    # Serial driver / robot_state_publisher are shared if needed
    robot_description = Command(['xacro ', os.path.join(
        get_package_share_directory('rm_robot_description'), 'urdf', 'sentry.urdf.xacro'),
        ' xyz:=', launch_params['base2camera']['xyz'], ' rpy:=', launch_params['base2camera']['rpy']])

    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{'robot_description': robot_description,
                    'publish_frequency': 1000.0,
                    'rune': launch_params['rune']  }]
    )

    serial_driver_node = Node(
        package='rm_serial_driver',
        executable='rm_serial_driver_node',
        name='serial_driver',
        output='both',
        emulate_tty=True,
        parameters=[node_params],
        on_exit=Shutdown(),
        ros_arguments=['--ros-args', '--log-level',
                       'serial_driver:='+launch_params['serial_log_level']],
    )

    # Delays
    delay_container0 = TimerAction(period=1.0, actions=[container0])
    delay_container1 = TimerAction(period=1.0, actions=[container1])
    delay_tracker_solver_0 = TimerAction(period=2.0, actions=[tracker0, solver0])
    delay_tracker_solver_1 = TimerAction(period=2.0, actions=[tracker1, solver1])
    delay_serial = TimerAction(period=5.0, actions=[serial_driver_node])

    return LaunchDescription([
        robot_state_publisher,
        delay_container0,
        delay_container1,
        delay_tracker_solver_0,
        delay_tracker_solver_1,
        delay_serial,
    ])
