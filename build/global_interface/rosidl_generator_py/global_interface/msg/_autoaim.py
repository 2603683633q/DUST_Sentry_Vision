# generated from rosidl_generator_py/resource/_idl.py.em
# with input from global_interface:msg/Autoaim.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Autoaim(type):
    """Metaclass of message 'Autoaim'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('global_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'global_interface.msg.Autoaim')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__autoaim
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__autoaim
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__autoaim
            cls._TYPE_SUPPORT = module.type_support_msg__msg__autoaim
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__autoaim

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

            from global_interface.msg import Point2f
            if Point2f.__class__._TYPE_SUPPORT is None:
                Point2f.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Autoaim(metaclass=Metaclass_Autoaim):
    """Message class 'Autoaim'."""

    __slots__ = [
        '_header',
        '_mode',
        '_key',
        '_hp',
        '_period',
        '_bullet_speed',
        '_timestamp',
        '_point2d',
        '_clockwise',
        '_is_spinning',
        '_is_controlled',
        '_is_target_lost',
        '_target_switched',
        '_spinning_switched',
        '_is_still_spinning',
        '_quat_imu',
        '_aiming_point_world',
        '_aiming_point_cam',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'mode': 'uint8',
        'key': 'string',
        'hp': 'uint16',
        'period': 'double',
        'bullet_speed': 'double',
        'timestamp': 'int64',
        'point2d': 'global_interface/Point2f[4]',
        'clockwise': 'boolean',
        'is_spinning': 'boolean',
        'is_controlled': 'boolean',
        'is_target_lost': 'boolean',
        'target_switched': 'boolean',
        'spinning_switched': 'boolean',
        'is_still_spinning': 'boolean',
        'quat_imu': 'geometry_msgs/Quaternion',
        'aiming_point_world': 'geometry_msgs/Point',
        'aiming_point_cam': 'geometry_msgs/Point',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['global_interface', 'msg'], 'Point2f'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.mode = kwargs.get('mode', int())
        self.key = kwargs.get('key', str())
        self.hp = kwargs.get('hp', int())
        self.period = kwargs.get('period', float())
        self.bullet_speed = kwargs.get('bullet_speed', float())
        self.timestamp = kwargs.get('timestamp', int())
        from global_interface.msg import Point2f
        self.point2d = kwargs.get(
            'point2d',
            [Point2f() for x in range(4)]
        )
        self.clockwise = kwargs.get('clockwise', bool())
        self.is_spinning = kwargs.get('is_spinning', bool())
        self.is_controlled = kwargs.get('is_controlled', bool())
        self.is_target_lost = kwargs.get('is_target_lost', bool())
        self.target_switched = kwargs.get('target_switched', bool())
        self.spinning_switched = kwargs.get('spinning_switched', bool())
        self.is_still_spinning = kwargs.get('is_still_spinning', bool())
        from geometry_msgs.msg import Quaternion
        self.quat_imu = kwargs.get('quat_imu', Quaternion())
        from geometry_msgs.msg import Point
        self.aiming_point_world = kwargs.get('aiming_point_world', Point())
        from geometry_msgs.msg import Point
        self.aiming_point_cam = kwargs.get('aiming_point_cam', Point())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.mode != other.mode:
            return False
        if self.key != other.key:
            return False
        if self.hp != other.hp:
            return False
        if self.period != other.period:
            return False
        if self.bullet_speed != other.bullet_speed:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.point2d != other.point2d:
            return False
        if self.clockwise != other.clockwise:
            return False
        if self.is_spinning != other.is_spinning:
            return False
        if self.is_controlled != other.is_controlled:
            return False
        if self.is_target_lost != other.is_target_lost:
            return False
        if self.target_switched != other.target_switched:
            return False
        if self.spinning_switched != other.spinning_switched:
            return False
        if self.is_still_spinning != other.is_still_spinning:
            return False
        if self.quat_imu != other.quat_imu:
            return False
        if self.aiming_point_world != other.aiming_point_world:
            return False
        if self.aiming_point_cam != other.aiming_point_cam:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

    @builtins.property
    def key(self):
        """Message field 'key'."""
        return self._key

    @key.setter
    def key(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'key' field must be of type 'str'"
        self._key = value

    @builtins.property
    def hp(self):
        """Message field 'hp'."""
        return self._hp

    @hp.setter
    def hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'hp' field must be an unsigned integer in [0, 65535]"
        self._hp = value

    @builtins.property
    def period(self):
        """Message field 'period'."""
        return self._period

    @period.setter
    def period(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'period' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'period' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._period = value

    @builtins.property
    def bullet_speed(self):
        """Message field 'bullet_speed'."""
        return self._bullet_speed

    @bullet_speed.setter
    def bullet_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bullet_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'bullet_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._bullet_speed = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'timestamp' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._timestamp = value

    @builtins.property
    def point2d(self):
        """Message field 'point2d'."""
        return self._point2d

    @point2d.setter
    def point2d(self, value):
        if __debug__:
            from global_interface.msg import Point2f
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, Point2f) for v in value) and
                 True), \
                "The 'point2d' field must be a set or sequence with length 4 and each value of type 'Point2f'"
        self._point2d = value

    @builtins.property
    def clockwise(self):
        """Message field 'clockwise'."""
        return self._clockwise

    @clockwise.setter
    def clockwise(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'clockwise' field must be of type 'bool'"
        self._clockwise = value

    @builtins.property
    def is_spinning(self):
        """Message field 'is_spinning'."""
        return self._is_spinning

    @is_spinning.setter
    def is_spinning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_spinning' field must be of type 'bool'"
        self._is_spinning = value

    @builtins.property
    def is_controlled(self):
        """Message field 'is_controlled'."""
        return self._is_controlled

    @is_controlled.setter
    def is_controlled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_controlled' field must be of type 'bool'"
        self._is_controlled = value

    @builtins.property
    def is_target_lost(self):
        """Message field 'is_target_lost'."""
        return self._is_target_lost

    @is_target_lost.setter
    def is_target_lost(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_target_lost' field must be of type 'bool'"
        self._is_target_lost = value

    @builtins.property
    def target_switched(self):
        """Message field 'target_switched'."""
        return self._target_switched

    @target_switched.setter
    def target_switched(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'target_switched' field must be of type 'bool'"
        self._target_switched = value

    @builtins.property
    def spinning_switched(self):
        """Message field 'spinning_switched'."""
        return self._spinning_switched

    @spinning_switched.setter
    def spinning_switched(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'spinning_switched' field must be of type 'bool'"
        self._spinning_switched = value

    @builtins.property
    def is_still_spinning(self):
        """Message field 'is_still_spinning'."""
        return self._is_still_spinning

    @is_still_spinning.setter
    def is_still_spinning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_still_spinning' field must be of type 'bool'"
        self._is_still_spinning = value

    @builtins.property
    def quat_imu(self):
        """Message field 'quat_imu'."""
        return self._quat_imu

    @quat_imu.setter
    def quat_imu(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'quat_imu' field must be a sub message of type 'Quaternion'"
        self._quat_imu = value

    @builtins.property
    def aiming_point_world(self):
        """Message field 'aiming_point_world'."""
        return self._aiming_point_world

    @aiming_point_world.setter
    def aiming_point_world(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'aiming_point_world' field must be a sub message of type 'Point'"
        self._aiming_point_world = value

    @builtins.property
    def aiming_point_cam(self):
        """Message field 'aiming_point_cam'."""
        return self._aiming_point_cam

    @aiming_point_cam.setter
    def aiming_point_cam(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'aiming_point_cam' field must be a sub message of type 'Point'"
        self._aiming_point_cam = value
