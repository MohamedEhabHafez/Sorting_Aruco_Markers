#! /usr/bin/env python

# [START imports]
import rospy
import math
import time

from geometry_msgs.msg import PoseStamped, Pose, Twist
from nav_msgs.msg import Odometry
from visualization_msgs.msg import Marker
from tf.transformations import euler_from_quaternion, quaternion_from_euler
from move_base_msgs.msg import MoveBaseActionResult
# [END imports]


class ArucoNavigation():
    def __init__(self):
        # [START attributes]
        self.crops_IDs = {'Tomato': 582, 'Green Pepper': 26, 'Lemon': 63}
        self.previous_marker_id = 0
        self.tiago_current_heading = self.aruco_heading = 0.0
        self.reach = False
        self.tiago_base_odom = Odometry()
        self.tiago_base_setpoint = PoseStamped()
        self.tiago_base_home_pose = Pose() # home position of the tiago robot that he starts and ends at w.r.t the "odom" frame
        # [END attributes]

        # [START ROS params]
        self.crop_to_sort = rospy.get_param("~crop_to_sort", "Lemon")
        # [END ROS params]

        # [START Publishers]
        self.tiago_base_setpoint_pub = rospy.Publisher('/tiago_base/setpoint', PoseStamped, queue_size=1)
        self.cmd_vel_pub = rospy.Publisher('/mobile_base_controller/cmd_vel', Twist, queue_size=1)
        # [END Publishers]

        # [START Subscribers]
        self.tiago_base_odom_sub = rospy.Subscriber('mobile_base_controller/odom', Odometry, self.tiago_odom_cb)
        self.aruco_marker_sub = rospy.Subscriber('aruco_single/marker', Marker, self.aruco_marker_cb)
        # [END Subscribers]

    # [START Callbacks]
    def tiago_odom_cb(self, odom_msg):
        self.tiago_base_odom = odom_msg
        # Convert the quaternion odom orientation to roll, pitch, yaw(heading) of the robot_base w.r.t "odom" frame
        orientation_q = odom_msg.pose.pose.orientation
        orientation_list = [orientation_q.x, orientation_q.y, orientation_q.z, orientation_q.w]
        (_,_,self.tiago_current_heading) = euler_from_quaternion(orientation_list)
    
    def aruco_marker_cb(self, aruco_marker_msg):
        self.aruco_pose = aruco_marker_msg.pose
        # Convert the quaternion odom orientation to roll, pitch, yaw(heading) of the robot_base w.r.t "odom" frame
        orientation_q = aruco_marker_msg.pose.orientation
        orientation_list = [orientation_q.x, orientation_q.y, orientation_q.z, orientation_q.w]
        (_,_,self.aruco_heading) = euler_from_quaternion(orientation_list)
        self.aruco_id = aruco_marker_msg.id
        if (not self.reach):
            self.navigate()

    
    # [END Callbacks]


    # [START Main Class functions]
    def navigate(self):
        """ navigating based on the Aruco markers IDs to reach the desired crops ID destination """
        if (self.aruco_id != self.previous_marker_id):
            
            self.tiago_base_setpoint.pose.position.x = self.aruco_pose.position.x
            self.tiago_base_setpoint.pose.position.y = self.aruco_pose.position.y
            self.publish_setpoint()
            
            if self.aruco_id == self.crops_IDs[self.crop_to_sort]:
                goal_result = rospy.wait_for_message("move_base/result",MoveBaseActionResult)
                if goal_result.status.text == "Goal reached.":
                    print("GOAL REACHED!")
                    self.reach = True        
                    ## To Do: include the heading in the equation to rotate the robot right until it detects a marker with the same ID and starts the drop off process.
        #             self.rotate_right(math.pi)
#                     self.drop_off()
#                     self.rotate_right(math.pi)
                    ## Return to the home position
                    self.return_home()
            elif (not self.reach):
                ## To Do: include the heading in the equation to get an extra distance in the x_axis direction of the robot.
                goal_result = rospy.wait_for_message("move_base/result",MoveBaseActionResult)
                if goal_result.status.text == "Goal reached.":
                    print("GOAL REACHED!")
                    self.previous_marker_id = self.aruco_id        
                           
    
    def rotate_right(self, theta):
        """ Rotate Tiago Robot base right to the Drop-off Destination for the desired sorted crop """
        # Rotating the target radian yaw by 90 degrees to the right.
        tiago_base_target_yaw = self.aruco_heading-theta
        
        # Publish cmd_vel (Twist) msg with the rotation to topic /mobile_base_controller/cmd_vel.
        cmd_vel = Twist()
        cmd_vel.angular.z = tiago_base_target_yaw
        self.cmd_vel_pub.publish(cmd_vel)
    
    def rotate_left(self, theta):
        """ Rotate Tiago Robot base left to the Drop-off Destination for the desired sorted crop """
        # Rotating the target radian yaw by theta radians to the left.
        tiago_base_target_yaw = self.aruco_heading+theta
        
        # Publish cmd_vel (Twist) msg with the rotation to topic /mobile_base_controller/cmd_vel.
        cmd_vel = Twist()
        cmd_vel.angular.z = tiago_base_target_yaw
        self.cmd_vel_pub.publish(cmd_vel) 
    
#     def pick_up(self):
#         """ Pick the crop's box using the end effector gripper """
    
#     def drop_off(self):
#         """ Drop the crop's box at its destination on the table center """
            
    
    def return_home(self):
        """ Return Tiago Robot base back to its start pose """
        self.tiago_base_setpoint.pose = self.tiago_base_home_pose
        self.publish_setpoint()
        goal_result = rospy.wait_for_message("move_base/result",MoveBaseActionResult)
        if goal_result.status.text == "Goal reached.":
            rospy.wait_for_message("aruco_single/marker", Marker)
            self.reach = False
#             self.navigate()
    
    def publish_setpoint(self):
        """ publish the tiago base setpoint pose to ROS topic /tiago_base/setpoint """
        if self.tiago_base_home_pose.orientation.z == 0.0:
            odom = rospy.wait_for_message('mobile_base_controller/odom', Odometry)
            self.tiago_base_home_pose = odom.pose.pose

        tiago_base_setpoint = PoseStamped()
        tiago_base_setpoint.header.frame_id = "odom"
        tiago_base_setpoint.header.stamp = rospy.Time.now()
        
        tiago_base_setpoint.pose.position.x = self.tiago_base_setpoint.pose.position.x
        tiago_base_setpoint.pose.position.y = self.tiago_base_setpoint.pose.position.y
        tiago_base_setpoint.pose.orientation.x =  0.0
        tiago_base_setpoint.pose.orientation.y =  0.0
        tiago_base_setpoint.pose.orientation.z = self.tiago_base_home_pose.orientation.z
        tiago_base_setpoint.pose.orientation.w = self.tiago_base_home_pose.orientation.w
        self.tiago_base_setpoint_pub.publish(tiago_base_setpoint)
        print(tiago_base_setpoint)
        
    # [END Main Class functions]


def main():
    rospy.init_node('navigate_with_aruco')
    move_robot_base = ArucoNavigation()
    rospy.spin()
    
if __name__ == '__main__':
    try:
        main()
    except rospy.ROSInterruptException:
        rospy.loginfo("Navigation using aruco finished.")
        pass
