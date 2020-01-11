// Generated by gencpp from file controller_manager_msgs/ControllerState.msg
// DO NOT EDIT!


#ifndef CONTROLLER_MANAGER_MSGS_MESSAGE_CONTROLLERSTATE_H
#define CONTROLLER_MANAGER_MSGS_MESSAGE_CONTROLLERSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <controller_manager_msgs/HardwareInterfaceResources.h>

namespace controller_manager_msgs
{
template <class ContainerAllocator>
struct ControllerState_
{
  typedef ControllerState_<ContainerAllocator> Type;

  ControllerState_()
    : name()
    , state()
    , type()
    , claimed_resources()  {
    }
  ControllerState_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , state(_alloc)
    , type(_alloc)
    , claimed_resources(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _state_type;
  _state_type state;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;

   typedef std::vector< ::controller_manager_msgs::HardwareInterfaceResources_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::controller_manager_msgs::HardwareInterfaceResources_<ContainerAllocator> >::other >  _claimed_resources_type;
  _claimed_resources_type claimed_resources;





  typedef boost::shared_ptr< ::controller_manager_msgs::ControllerState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::controller_manager_msgs::ControllerState_<ContainerAllocator> const> ConstPtr;

}; // struct ControllerState_

typedef ::controller_manager_msgs::ControllerState_<std::allocator<void> > ControllerState;

typedef boost::shared_ptr< ::controller_manager_msgs::ControllerState > ControllerStatePtr;
typedef boost::shared_ptr< ::controller_manager_msgs::ControllerState const> ControllerStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::controller_manager_msgs::ControllerState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::controller_manager_msgs::ControllerState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace controller_manager_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'controller_manager_msgs': ['/home/mohamed/tiago_public_ws/src/ros_control/controller_manager_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::controller_manager_msgs::ControllerState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::controller_manager_msgs::ControllerState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::controller_manager_msgs::ControllerState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::controller_manager_msgs::ControllerState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::controller_manager_msgs::ControllerState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::controller_manager_msgs::ControllerState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::controller_manager_msgs::ControllerState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aeb6b261d97793ab74099a3740245272";
  }

  static const char* value(const ::controller_manager_msgs::ControllerState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaeb6b261d97793abULL;
  static const uint64_t static_value2 = 0x74099a3740245272ULL;
};

template<class ContainerAllocator>
struct DataType< ::controller_manager_msgs::ControllerState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "controller_manager_msgs/ControllerState";
  }

  static const char* value(const ::controller_manager_msgs::ControllerState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::controller_manager_msgs::ControllerState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n\
string state\n\
string type\n\
controller_manager_msgs/HardwareInterfaceResources[] claimed_resources\n\
\n\
================================================================================\n\
MSG: controller_manager_msgs/HardwareInterfaceResources\n\
# Type of hardware interface\n\
string hardware_interface\n\
# List of resources belonging to the hardware interface\n\
string[] resources\n\
";
  }

  static const char* value(const ::controller_manager_msgs::ControllerState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::controller_manager_msgs::ControllerState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.state);
      stream.next(m.type);
      stream.next(m.claimed_resources);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ControllerState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::controller_manager_msgs::ControllerState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::controller_manager_msgs::ControllerState_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "state: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.state);
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
    s << indent << "claimed_resources[]" << std::endl;
    for (size_t i = 0; i < v.claimed_resources.size(); ++i)
    {
      s << indent << "  claimed_resources[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::controller_manager_msgs::HardwareInterfaceResources_<ContainerAllocator> >::stream(s, indent + "    ", v.claimed_resources[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONTROLLER_MANAGER_MSGS_MESSAGE_CONTROLLERSTATE_H
