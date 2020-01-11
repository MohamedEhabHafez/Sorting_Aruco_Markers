// Generated by gencpp from file pal_interaction_msgs/TtsText.msg
// DO NOT EDIT!


#ifndef PAL_INTERACTION_MSGS_MESSAGE_TTSTEXT_H
#define PAL_INTERACTION_MSGS_MESSAGE_TTSTEXT_H


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
struct TtsText_
{
  typedef TtsText_<ContainerAllocator> Type;

  TtsText_()
    : text()
    , lang_id()  {
    }
  TtsText_(const ContainerAllocator& _alloc)
    : text(_alloc)
    , lang_id(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _text_type;
  _text_type text;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _lang_id_type;
  _lang_id_type lang_id;





  typedef boost::shared_ptr< ::pal_interaction_msgs::TtsText_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_interaction_msgs::TtsText_<ContainerAllocator> const> ConstPtr;

}; // struct TtsText_

typedef ::pal_interaction_msgs::TtsText_<std::allocator<void> > TtsText;

typedef boost::shared_ptr< ::pal_interaction_msgs::TtsText > TtsTextPtr;
typedef boost::shared_ptr< ::pal_interaction_msgs::TtsText const> TtsTextConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_interaction_msgs::TtsText_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_interaction_msgs::TtsText_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::pal_interaction_msgs::TtsText_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::TtsText_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::TtsText_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::TtsText_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::TtsText_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::TtsText_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_interaction_msgs::TtsText_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a42001bb3ccbf1a914b618f34087dc37";
  }

  static const char* value(const ::pal_interaction_msgs::TtsText_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa42001bb3ccbf1a9ULL;
  static const uint64_t static_value2 = 0x14b618f34087dc37ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_interaction_msgs::TtsText_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_interaction_msgs/TtsText";
  }

  static const char* value(const ::pal_interaction_msgs::TtsText_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_interaction_msgs::TtsText_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# this message is to specify \n\
# raw text to the TTS server. \n\
\n\
string text\n\
\n\
# Language id in RFC 3066 format\n\
# This field is mandatory\n\
string lang_id\n\
";
  }

  static const char* value(const ::pal_interaction_msgs::TtsText_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_interaction_msgs::TtsText_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.text);
      stream.next(m.lang_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TtsText_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_interaction_msgs::TtsText_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_interaction_msgs::TtsText_<ContainerAllocator>& v)
  {
    s << indent << "text: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.text);
    s << indent << "lang_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.lang_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_INTERACTION_MSGS_MESSAGE_TTSTEXT_H
