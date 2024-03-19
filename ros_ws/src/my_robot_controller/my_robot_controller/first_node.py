#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class MyNode(Node):
    
    def __init__(self):
        super().__init__("1 node")
        self.get_logger().info("Hello")

def main(args=None):
    rclpy.init(args=args)
    myNode = MyNode()
    rclpy.shutdown()

if __name__ ==" __main__":
    main()