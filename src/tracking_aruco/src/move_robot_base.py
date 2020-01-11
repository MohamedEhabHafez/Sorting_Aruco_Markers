#! /usr/bin/env python

# [START imports]
import rospy
import actionlib

from move_base_msgs.msg import MoveBaseAction, MoveBaseGoal

from geometry_msgs.msg import Quaternion, PoseStamped
from nav_msgs.msg import Odometry
# [END imports]

class MoveRobotBase():
    def __init__(self):
        # [START attributes]
        self.tiago_base_setpoint = {'x': 0, 'y': 0}
        self.tiago_base_setpoint_orientation = Quaternion()
        # [END attributes]

        # [START ROS params]
        # [END ROS params]

        # [START Publishers]
        # [END Publishers]

        # [START Subscribers]
        self.tiago_base_odom_sub = rospy.Subscriber('mobile_base_controller/odom', Odometry, self.tiago_odom_cb)
        self.tiago_base_setpoint_sub = rospy.Subscriber('/tiago_base/setpoint', PoseStamped, self.tiago_setpoint_cb)
        # [END Subscribers]

    # [START Callbacks]
    def tiago_odom_cb(self, odom_msg):
        self.tiago_base_odom = odom_msg
        
    def tiago_setpoint_cb(self, setpoint_msg):
        self.setpoint_stamp = setpoint_msg.header.stamp
        self.tiago_base_setpoint['x'] = setpoint_msg.pose.position.x
        self.tiago_base_setpoint['y'] = setpoint_msg.pose.position.y
        self.tiago_base_setpoint_orientation = setpoint_msg.pose.orientation
        
        result = self.movebase_client()
        if result:
            rospy.loginfo("Goal execution done!")
    # [END Callbacks]


    # [START Main Class functions]
    def movebase_client(self):
        """ Send goal pose to ROS action server MoveBaseAction """
        client = actionlib.SimpleActionClient('move_base',MoveBaseAction)
        client.wait_for_server()
        
        # Create a goal
        goal = MoveBaseGoal()
        goal.target_pose.header.frame_id = "odom" 
        goal.target_pose.header.stamp = self.setpoint_stamp
        # Move in meters w.r.t frame_id coordinate frame 
        goal.target_pose.pose.position.x = self.tiago_base_setpoint['x']
        goal.target_pose.pose.position.y = self.tiago_base_setpoint['y']
        # Rotation of the mobile base frame w.r.t. frame_id
        goal.target_pose.pose.orientation = self.tiago_base_setpoint_orientation 
        # Sends the goal to the action server.
        client.send_goal(goal)
        # Waits for the server to finish performing the action.
        wait = client.wait_for_result()
        # If the result doesn't arrive, assume the Server is not available
        if not wait:
            rospy.logerr("Action server not available!")
            rospy.signal_shutdown("Action server not available!")
        else:
        # Result of executing the action
            return client.get_result()
    # [END Main Class functions]

def main():
    rospy.init_node('move_robot_base_client')
    move_robot_base = MoveRobotBase()
    rospy.spin()

if __name__ == '__main__':
    try:
        main()
    except rospy.ROSInterruptException:
        rospy.loginfo("Navigation test finished.")
        pass

