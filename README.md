# Sorting_Aruco_Markers
sorting crops/boxes based on Aruco Markers. Warehouse or Factory Use.

## Installing and building the tiago_public_ws
First of all open a terminal and create an empty workspace:
```
mkdir ~/tiago_public_ws
cd ~/tiago_public_ws
```
Download the file **tiago_public.rosinstall**. Copy the rosinstall file in ~/tiago_public_ws. Then run the following instruction in order to clone all the required repositories within the workspace: 

Set up rosdep
```
sudo rosdep init
rosdep update
```
Then you may run the following instruction to make sure that all dependencies referenced in the workspace are installed 
```
rosdep install --from-paths src --ignore-src --rosdistro kinetic --skip-keys="opencv2 opencv2-nonfree pal_laser_filters speed_limit_node sensor_to_cloud hokuyo_node libdw-dev python-graphitesend-pip python-statsd pal_filters pal_vo_server pal_usb_utils pal_pcl pal_pcl_points_throttle_and_filter pal_karto pal_local_joint_control camera_calibration_files pal_startup_msgs pal-orbbec-openni2 dummy_actuators_manager pal_local_planner gravity_compensation_controller current_limit_controller dynamic_footprint dynamixel_cpp tf_lookup"
```
Then, you may proceed building the workspace:
```
source /opt/ros/kinetic/setup.bash
catkin build -DCATKIN_ENABLE_TESTING=0
```
Once you compiled all packages and sourced the environment (**source devel/setup.bash**) it's all ready to go. 

## Testing the sorting simulation
First of all open a console and source the workspace:
```
source ./devel/setup.bash
```
To launch the simulation of the TIAGo, execute:
```
roslaunch tracking_aruco tracking_aruco.launch
```
Gazebo world and Rviz simulation will show on your screen.
To start the sorting navigation, run the navigate_with_aruco.py ros node with the desired crop to sort:
```
rosrun tracking_aruco navigate_with_aruco.py _cropt_to_sort:=Tomato 
```
or
```
rosrun tracking_aruco navigate_with_aruco.py _cropt_to_sort:=Green\ Pepper
```
or
```
rosrun tracking_aruco navigate_with_aruco.py _cropt_to_sort:=Lemon 
```






