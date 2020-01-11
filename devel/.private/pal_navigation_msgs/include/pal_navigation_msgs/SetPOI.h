// Generated by gencpp from file pal_navigation_msgs/SetPOI.msg
// DO NOT EDIT!


#ifndef PAL_NAVIGATION_MSGS_MESSAGE_SETPOI_H
#define PAL_NAVIGATION_MSGS_MESSAGE_SETPOI_H

#include <ros/service_traits.h>


#include <pal_navigation_msgs/SetPOIRequest.h>
#include <pal_navigation_msgs/SetPOIResponse.h>


namespace pal_navigation_msgs
{

struct SetPOI
{

typedef SetPOIRequest Request;
typedef SetPOIResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetPOI
} // namespace pal_navigation_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::pal_navigation_msgs::SetPOI > {
  static const char* value()
  {
    return "f0a8811f1068c7b1269d9e58c608681f";
  }

  static const char* value(const ::pal_navigation_msgs::SetPOI&) { return value(); }
};

template<>
struct DataType< ::pal_navigation_msgs::SetPOI > {
  static const char* value()
  {
    return "pal_navigation_msgs/SetPOI";
  }

  static const char* value(const ::pal_navigation_msgs::SetPOI&) { return value(); }
};


// service_traits::MD5Sum< ::pal_navigation_msgs::SetPOIRequest> should match 
// service_traits::MD5Sum< ::pal_navigation_msgs::SetPOI > 
template<>
struct MD5Sum< ::pal_navigation_msgs::SetPOIRequest>
{
  static const char* value()
  {
    return MD5Sum< ::pal_navigation_msgs::SetPOI >::value();
  }
  static const char* value(const ::pal_navigation_msgs::SetPOIRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::pal_navigation_msgs::SetPOIRequest> should match 
// service_traits::DataType< ::pal_navigation_msgs::SetPOI > 
template<>
struct DataType< ::pal_navigation_msgs::SetPOIRequest>
{
  static const char* value()
  {
    return DataType< ::pal_navigation_msgs::SetPOI >::value();
  }
  static const char* value(const ::pal_navigation_msgs::SetPOIRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::pal_navigation_msgs::SetPOIResponse> should match 
// service_traits::MD5Sum< ::pal_navigation_msgs::SetPOI > 
template<>
struct MD5Sum< ::pal_navigation_msgs::SetPOIResponse>
{
  static const char* value()
  {
    return MD5Sum< ::pal_navigation_msgs::SetPOI >::value();
  }
  static const char* value(const ::pal_navigation_msgs::SetPOIResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::pal_navigation_msgs::SetPOIResponse> should match 
// service_traits::DataType< ::pal_navigation_msgs::SetPOI > 
template<>
struct DataType< ::pal_navigation_msgs::SetPOIResponse>
{
  static const char* value()
  {
    return DataType< ::pal_navigation_msgs::SetPOI >::value();
  }
  static const char* value(const ::pal_navigation_msgs::SetPOIResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PAL_NAVIGATION_MSGS_MESSAGE_SETPOI_H
