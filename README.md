##PLANNING_WITH_ROS2_COURSE##

#编译整个项目
clocon build

#单独编译某一个功能包
colcon build --packages-select planning

#运行规划节点
ros2 run planning planning_node

#加载车辆模型和rviz
ros2 launch planning planning_launch.py


#some used emojis
[✅]
[❌]
[🚀]   
[⚙️]  
[📦]  
[⏳] 