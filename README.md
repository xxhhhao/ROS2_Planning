##PLANNING_WITH_ROS2_COURSE##

#编译整个项目
clocon build

#单独编译某一个节点
colcon build --packages-select +你想要编译的功能包

#运行规划节点
ros2 run planning planning_node

#加载车辆模型和rviz
ros2 launch planning planning_launch.py


#emojis
[✅]
[❌]
[🚀]   
[⚙️]  
[📦]  
[⏳] 