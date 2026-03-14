import rclpy 
from rclpy.node import Node
import numpy as np
import matplotlib.pyplot as plt


class PlotData(Node):
    def __init__(self):
        super().__init__("data_plot_node")
        self.get_logger().info("*** data_plot_node created")
    
def main(args=None):
    rclpy.init(args=args)
    plot_node = PlotData()

    try:
        rclpy.spin(plot_node)
    except KeyboardInterrupt:
        print("Interrupted by user")
    finally:
        rclpy.shutdown()

if __name__ == '__main__':
    main()
