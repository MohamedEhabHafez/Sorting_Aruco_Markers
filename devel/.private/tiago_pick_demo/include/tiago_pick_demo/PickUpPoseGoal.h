// Generated by gencpp from file tiago_pick_demo/PickUpPoseGoal.msg
// DO NOT EDIT!


#ifndef TIAGO_PICK_DEMO_MESSAGE_PICKUPPOSEGOAL_H
#define TIAGO_PICK_DEMO_MESSAGE_PICKUPPOSEGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseStamped.h>

namespace tiago_pick_demo
{
template <class ContainerAllocator>
struct PickUpPoseGoal_
{
  typedef PickUpPoseGoal_<ContainerAllocator> Type;

  PickUpPoseGoal_()
    : object_pose()  {
    }
  PickUpPoseGoal_(const ContainerAllocator& _alloc)
    : object_pose(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _object_pose_type;
  _object_pose_type object_pose;





  typedef boost::shared_ptr< ::tiago_pick_demo::PickUpPoseGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tiago_pick_demo::PickUpPoseGoal_<ContainerAllocator> const> ConstPtr;

}; // struct PickUpPoseGoal_

typedef ::tiago_pick_demo::PickUpPoseGoal_<std::allocator<void> > PickUpPoseGoal;

typedef boost::shared_ptr< ::tiago_pick_demo::PickUpPoseGoal > PickUpPoseGoalPtr;
typedef boost::shared_ptr< ::tiago_pick_demo::PickUpPoseGoal const> PickUpPoseGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tiago_pick_demo::PickUpPoseGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tiago_pick_demo::PickUpPoseGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace tiago_pick_demo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'tiago_pick_demo': ['/home/mohamed/tiago_public_ws/devel/.private/tiago_pick_demo/share/tiago_pick_demo/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::tiago_pick_demo::PickUpPoseGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tiago_pick_demo::PickUpPoseGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tiago_pick_demo::PickUpPoseGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tiago_pick_demo::PickUpPoseGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tiago_pick_demo::PickUpPoseGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tiago_pick_demo::PickUpPoseGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tiago_pick_demo::PickUpPoseGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ce62f562fe862ddbebe5377023767cb7";
  }

  static const char* value(const ::tiago_pick_demo::PickUpPoseGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xce62f562fe862ddbULL;
  static const uint64_t static_value2 = 0xebe5377023767cb7ULL;
};

template<class ContainerAllocator>
struct DataType< ::tiago_pick_demo::PickUpPoseGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tiago_pick_demo/PickUpPoseGoal";
  }

  static const char* value(const ::tiago_pick_demo::PickUpPoseGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tiago_pick_demo::PickUpPoseGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
geometry_msgs/PoseStamped object_pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::tiago_pick_demo::PickUpPoseGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tiago_pick_demo::PickUpPoseGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.object_pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PickUpPoseGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tiago_pick_demo::PickUpPoseGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tiago_pick_demo::PickUpPoseGoal_<ContainerAllocator>& v)
  {
    s << indent << "object_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.object_pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TIAGO_PICK_DEMO_MESSAGE_PICKUPPOSEGOAL_H
