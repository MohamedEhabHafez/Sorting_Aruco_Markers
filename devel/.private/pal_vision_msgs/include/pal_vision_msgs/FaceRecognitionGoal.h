// Generated by gencpp from file pal_vision_msgs/FaceRecognitionGoal.msg
// DO NOT EDIT!


#ifndef PAL_VISION_MSGS_MESSAGE_FACERECOGNITIONGOAL_H
#define PAL_VISION_MSGS_MESSAGE_FACERECOGNITIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_vision_msgs
{
template <class ContainerAllocator>
struct FaceRecognitionGoal_
{
  typedef FaceRecognitionGoal_<ContainerAllocator> Type;

  FaceRecognitionGoal_()
    : order_id(0)
    , order_argument()  {
    }
  FaceRecognitionGoal_(const ContainerAllocator& _alloc)
    : order_id(0)
    , order_argument(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _order_id_type;
  _order_id_type order_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _order_argument_type;
  _order_argument_type order_argument;





  typedef boost::shared_ptr< ::pal_vision_msgs::FaceRecognitionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_vision_msgs::FaceRecognitionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct FaceRecognitionGoal_

typedef ::pal_vision_msgs::FaceRecognitionGoal_<std::allocator<void> > FaceRecognitionGoal;

typedef boost::shared_ptr< ::pal_vision_msgs::FaceRecognitionGoal > FaceRecognitionGoalPtr;
typedef boost::shared_ptr< ::pal_vision_msgs::FaceRecognitionGoal const> FaceRecognitionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_vision_msgs::FaceRecognitionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_vision_msgs::FaceRecognitionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_vision_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'pal_vision_msgs': ['/home/mohamed/tiago_public_ws/src/pal_msgs/pal_vision_msgs/msg', '/home/mohamed/tiago_public_ws/devel/.private/pal_vision_msgs/share/pal_vision_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_vision_msgs::FaceRecognitionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_vision_msgs::FaceRecognitionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_vision_msgs::FaceRecognitionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_vision_msgs::FaceRecognitionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_vision_msgs::FaceRecognitionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_vision_msgs::FaceRecognitionGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_vision_msgs::FaceRecognitionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "12fa0d0af9b141eceafa42011d31f9c2";
  }

  static const char* value(const ::pal_vision_msgs::FaceRecognitionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x12fa0d0af9b141ecULL;
  static const uint64_t static_value2 = 0xeafa42011d31f9c2ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_vision_msgs::FaceRecognitionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_vision_msgs/FaceRecognitionGoal";
  }

  static const char* value(const ::pal_vision_msgs::FaceRecognitionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_vision_msgs::FaceRecognitionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal definition\n\
uint8   order_id \n\
string  order_argument\n\
";
  }

  static const char* value(const ::pal_vision_msgs::FaceRecognitionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_vision_msgs::FaceRecognitionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.order_id);
      stream.next(m.order_argument);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FaceRecognitionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_vision_msgs::FaceRecognitionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_vision_msgs::FaceRecognitionGoal_<ContainerAllocator>& v)
  {
    s << indent << "order_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.order_id);
    s << indent << "order_argument: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.order_argument);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_VISION_MSGS_MESSAGE_FACERECOGNITIONGOAL_H
