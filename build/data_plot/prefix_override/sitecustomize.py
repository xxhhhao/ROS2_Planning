import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/lh/WorkSpace/ROS2_Planning/install/data_plot'
