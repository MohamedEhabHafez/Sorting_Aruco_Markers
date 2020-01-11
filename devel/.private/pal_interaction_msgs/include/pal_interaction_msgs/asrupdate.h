// Generated by gencpp from file pal_interaction_msgs/asrupdate.msg
// DO NOT EDIT!


#ifndef PAL_INTERACTION_MSGS_MESSAGE_ASRUPDATE_H
#define PAL_INTERACTION_MSGS_MESSAGE_ASRUPDATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_interaction_msgs
{
template <class ContainerAllocator>
struct asrupdate_
{
  typedef asrupdate_<ContainerAllocator> Type;

  asrupdate_()
    : language()
    , enable_grammar()
    , disable_grammar()
    , acousticenv()
    , active(false)  {
    }
  asrupdate_(const ContainerAllocator& _alloc)
    : language(_alloc)
    , enable_grammar(_alloc)
    , disable_grammar(_alloc)
    , acousticenv(_alloc)
    , active(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _language_type;
  _language_type language;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _enable_grammar_type;
  _enable_grammar_type enable_grammar;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _disable_grammar_type;
  _disable_grammar_type disable_grammar;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _acousticenv_type;
  _acousticenv_type acousticenv;

   typedef uint8_t _active_type;
  _active_type active;





  typedef boost::shared_ptr< ::pal_interaction_msgs::asrupdate_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_interaction_msgs::asrupdate_<ContainerAllocator> const> ConstPtr;

}; // struct asrupdate_

typedef ::pal_interaction_msgs::asrupdate_<std::allocator<void> > asrupdate;

typedef boost::shared_ptr< ::pal_interaction_msgs::asrupdate > asrupdatePtr;
typedef boost::shared_ptr< ::pal_interaction_msgs::asrupdate const> asrupdateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_interaction_msgs::asrupdate_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_interaction_msgs::asrupdate_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_interaction_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'pal_interaction_msgs': ['/home/mohamed/tiago_public_ws/src/pal_msgs/pal_interaction_msgs/msg', '/home/mohamed/tiago_public_ws/devel/.private/pal_interaction_msgs/share/pal_interaction_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::asrupdate_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::asrupdate_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::asrupdate_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::asrupdate_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::asrupdate_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::asrupdate_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_interaction_msgs::asrupdate_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1f28e753977d8fe335d6b968a649f1ed";
  }

  static const char* value(const ::pal_interaction_msgs::asrupdate_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1f28e753977d8fe3ULL;
  static const uint64_t static_value2 = 0x35d6b968a649f1edULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_interaction_msgs::asrupdate_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_interaction_msgs/asrupdate";
  }

  static const char* value(const ::pal_interaction_msgs::asrupdate_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_interaction_msgs::asrupdate_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# V.1.0 of the ASR ROS API for the servie.\n\
# just has the language and grammar to enable, the acoustic models to be used,\n\
# and whether we want to activate or deactivate the recognizer.\n\
string language\n\
string enable_grammar\n\
string disable_grammar\n\
string acousticenv\n\
bool active\n\
";
  }

  static const char* value(const ::pal_interaction_msgs::asrupdate_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_interaction_msgs::asrupdate_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.language);
      stream.next(m.enable_grammar);
      stream.next(m.disable_grammar);
      stream.next(m.acousticenv);
      stream.next(m.active);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct asrupdate_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_interaction_msgs::asrupdate_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_interaction_msgs::asrupdate_<ContainerAllocator>& v)
  {
    s << indent << "language: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.language);
    s << indent << "enable_grammar: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.enable_grammar);
    s << indent << "disable_grammar: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.disable_grammar);
    s << indent << "acousticenv: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.acousticenv);
    s << indent << "active: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_INTERACTION_MSGS_MESSAGE_ASRUPDATE_H
