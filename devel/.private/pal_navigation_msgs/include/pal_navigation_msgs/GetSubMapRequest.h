// Generated by gencpp from file pal_navigation_msgs/GetSubMapRequest.msg
// DO NOT EDIT!


#ifndef PAL_NAVIGATION_MSGS_MESSAGE_GETSUBMAPREQUEST_H
#define PAL_NAVIGATION_MSGS_MESSAGE_GETSUBMAPREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_navigation_msgs
{
template <class ContainerAllocator>
struct GetSubMapRequest_
{
  typedef GetSubMapRequest_<ContainerAllocator> Type;

  GetSubMapRequest_()
    : index(0)  {
    }
  GetSubMapRequest_(const ContainerAllocator& _alloc)
    : index(0)  {
  (void)_alloc;
    }



   typedef int8_t _index_type;
  _index_type index;





  typedef boost::shared_ptr< ::pal_navigation_msgs::GetSubMapRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_navigation_msgs::GetSubMapRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetSubMapRequest_

typedef ::pal_navigation_msgs::GetSubMapRequest_<std::allocator<void> > GetSubMapRequest;

typedef boost::shared_ptr< ::pal_navigation_msgs::GetSubMapRequest > GetSubMapRequestPtr;
typedef boost::shared_ptr< ::pal_navigation_msgs::GetSubMapRequest const> GetSubMapRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_navigation_msgs::GetSubMapRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_navigation_msgs::GetSubMapRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_navigation_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'pal_navigation_msgs': ['/home/mohamed/tiago_public_ws/devel/.private/pal_navigation_msgs/share/pal_navigation_msgs/msg', '/home/mohamed/tiago_public_ws/src/pal_msgs/pal_navigation_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::GetSubMapRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::GetSubMapRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::GetSubMapRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::GetSubMapRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::GetSubMapRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::GetSubMapRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_navigation_msgs::GetSubMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c4ecff52046eaecf0190e650b1958286";
  }

  static const char* value(const ::pal_navigation_msgs::GetSubMapRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc4ecff52046eaecfULL;
  static const uint64_t static_value2 = 0x0190e650b1958286ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_navigation_msgs::GetSubMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_navigation_msgs/GetSubMapRequest";
  }

  static const char* value(const ::pal_navigation_msgs::GetSubMapRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_navigation_msgs::GetSubMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
int8 index\n\
";
  }

  static const char* value(const ::pal_navigation_msgs::GetSubMapRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_navigation_msgs::GetSubMapRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.index);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetSubMapRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_navigation_msgs::GetSubMapRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_navigation_msgs::GetSubMapRequest_<ContainerAllocator>& v)
  {
    s << indent << "index: ";
    Printer<int8_t>::stream(s, indent + "  ", v.index);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_NAVIGATION_MSGS_MESSAGE_GETSUBMAPREQUEST_H
