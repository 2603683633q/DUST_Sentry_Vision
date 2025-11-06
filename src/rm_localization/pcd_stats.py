import open3d as o3d
import numpy as np
import argparse

def analyze_pcd(pcd_path):
    # 读取点云
    pcd = o3d.io.read_point_cloud(pcd_path)
    points = np.asarray(pcd.points)

    if points.size == 0:
        print("点云为空！")
        return

    # 计算范围
    x_min, x_max = points[:,0].min(), points[:,0].max()
    y_min, y_max = points[:,1].min(), points[:,1].max()
    z_min, z_max = points[:,2].min(), points[:,2].max()

    # 计算中心
    center = points.mean(axis=0)

    print(f"点云文件: {pcd_path}")
    print(f"点数: {len(points)}")
    print(f"X范围: {x_min:.3f} -> {x_max:.3f}")
    print(f"Y范围: {y_min:.3f} -> {y_max:.3f}")
    print(f"Z范围: {z_min:.3f} -> {z_max:.3f}")
    print(f"点云中心: x={center[0]:.3f}, y={center[1]:.3f}, z={center[2]:.3f}")
    print(f"建议 ICP 初始位姿参考: [x={center[0]:.3f}, y={center[1]:.3f}, z={center[2]:.3f}, roll=0, pitch=0, yaw=0]")

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="统计 PCD 文件点云尺寸和中心")
    parser.add_argument("pcd_path", type=str, help="点云文件路径，例如 /home/user/map.pcd")
    args = parser.parse_args()

    analyze_pcd(args.pcd_path)
