// Generated by gencpp from file pal_detection_msgs/RotatedDetection2d.msg
// DO NOT EDIT!


#ifndef PAL_DETECTION_MSGS_MESSAGE_ROTATEDDETECTION2D_H
#define PAL_DETECTION_MSGS_MESSAGE_ROTATEDDETECTION2D_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace pal_detection_msgs
{
template <class ContainerAllocator>
struct RotatedDetection2d_
{
  typedef RotatedDetection2d_<ContainerAllocator> Type;

  RotatedDetection2d_()
    : header()
    , x()
    , y()  {
    }
  RotatedDetection2d_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , x(_alloc)
    , y(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other >  _x_type;
  _x_type x;

   typedef std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other >  _y_type;
  _y_type y;





  typedef boost::shared_ptr< ::pal_detection_msgs::RotatedDetection2d_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_detection_msgs::RotatedDetection2d_<ContainerAllocator> const> ConstPtr;

}; // struct RotatedDetection2d_

typedef ::pal_detection_msgs::RotatedDetection2d_<std::allocator<void> > RotatedDetection2d;

typedef boost::shared_ptr< ::pal_detection_msgs::RotatedDetection2d > RotatedDetection2dPtr;
typedef boost::shared_ptr< ::pal_detection_msgs::RotatedDetection2d const> RotatedDetection2dConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_detection_msgs::RotatedDetection2d_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_detection_msgs::RotatedDetection2d_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_detection_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'pal_detection_msgs': ['/home/mohamed/tiago_public_ws/src/pal_msgs/pal_detection_msgs/msg', '/home/mohamed/tiago_public_ws/devel/.private/pal_detection_msgs/share/pal_detection_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_detection_msgs::RotatedDetection2d_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_detection_msgs::RotatedDetection2d_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_detection_msgs::RotatedDetection2d_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_detection_msgs::RotatedDetection2d_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_detection_msgs::RotatedDetection2d_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_detection_msgs::RotatedDetection2d_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_detection_msgs::RotatedDetection2d_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1696e52e0f42b73a9168aef8ceb90f0e";
  }

  static const char* value(const ::pal_detection_msgs::RotatedDetection2d_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1696e52e0f42b73aULL;
  static const uint64_t static_value2 = 0x9168aef8ceb90f0eULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_detection_msgs::RotatedDetection2d_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_detection_msgs/RotatedDetection2d";
  }

  static const char* value(const ::pal_detection_msgs::RotatedDetection2d_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_detection_msgs::RotatedDetection2d_<ContainerAllocator> >
{
  static const char* value()
  {
    return "## Rotated rectangle in image coordinates defined by 4 vertices\n\
\n\
Header header\n\
\n\
# coordinates of the vertices of a rotated rectangle\n\
int64[] x\n\
int64[] y\n\
\n\
\n\
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
";
  }

  static const char* value(const ::pal_detection_msgs::RotatedDetection2d_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_detection_msgs::RotatedDetection2d_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.x);
      stream.next(m.y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RotatedDetection2d_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_detection_msgs::RotatedDetection2d_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_detection_msgs::RotatedDetection2d_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "x[]" << std::endl;
    for (size_t i = 0; i < v.x.size(); ++i)
    {
      s << indent << "  x[" << i << "]: ";
      Printer<int64_t>::stream(s, indent + "  ", v.x[i]);
    }
    s << indent << "y[]" << std::endl;
    for (size_t i = 0; i < v.y.size(); ++i)
    {
      s << indent << "  y[" << i << "]: ";
      Printer<int64_t>::stream(s, indent + "  ", v.y[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_DETECTION_MSGS_MESSAGE_ROTATEDDETECTION2D_H
