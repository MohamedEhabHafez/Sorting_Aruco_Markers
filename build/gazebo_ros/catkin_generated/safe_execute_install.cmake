execute_process(COMMAND "/home/mohamed/tiago_public_ws/build/gazebo_ros/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/mohamed/tiago_public_ws/build/gazebo_ros/catkin_generated/python_distutils_install.sh) returned error code ")
endif()