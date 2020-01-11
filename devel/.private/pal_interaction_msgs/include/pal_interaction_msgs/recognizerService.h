// Generated by gencpp from file pal_interaction_msgs/recognizerService.msg
// DO NOT EDIT!


#ifndef PAL_INTERACTION_MSGS_MESSAGE_RECOGNIZERSERVICE_H
#define PAL_INTERACTION_MSGS_MESSAGE_RECOGNIZERSERVICE_H

#include <ros/service_traits.h>


#include <pal_interaction_msgs/recognizerServiceRequest.h>
#include <pal_interaction_msgs/recognizerServiceResponse.h>


namespace pal_interaction_msgs
{

struct recognizerService
{

typedef recognizerServiceRequest Request;
typedef recognizerServiceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct recognizerService
} // namespace pal_interaction_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::pal_interaction_msgs::recognizerService > {
  static const char* value()
  {
    return "cfe4314795c9fe304282fdbecf5be6ec";
  }

  static const char* value(const ::pal_interaction_msgs::recognizerService&) { return value(); }
};

template<>
struct DataType< ::pal_interaction_msgs::recognizerService > {
  static const char* value()
  {
    return "pal_interaction_msgs/recognizerService";
  }

  static const char* value(const ::pal_interaction_msgs::recognizerService&) { return value(); }
};


// service_traits::MD5Sum< ::pal_interaction_msgs::recognizerServiceRequest> should match 
// service_traits::MD5Sum< ::pal_interaction_msgs::recognizerService > 
template<>
struct MD5Sum< ::pal_interaction_msgs::recognizerServiceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::pal_interaction_msgs::recognizerService >::value();
  }
  static const char* value(const ::pal_interaction_msgs::recognizerServiceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::pal_interaction_msgs::recognizerServiceRequest> should match 
// service_traits::DataType< ::pal_interaction_msgs::recognizerService > 
template<>
struct DataType< ::pal_interaction_msgs::recognizerServiceRequest>
{
  static const char* value()
  {
    return DataType< ::pal_interaction_msgs::recognizerService >::value();
  }
  static const char* value(const ::pal_interaction_msgs::recognizerServiceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::pal_interaction_msgs::recognizerServiceResponse> should match 
// service_traits::MD5Sum< ::pal_interaction_msgs::recognizerService > 
template<>
struct MD5Sum< ::pal_interaction_msgs::recognizerServiceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::pal_interaction_msgs::recognizerService >::value();
  }
  static const char* value(const ::pal_interaction_msgs::recognizerServiceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::pal_interaction_msgs::recognizerServiceResponse> should match 
// service_traits::DataType< ::pal_interaction_msgs::recognizerService > 
template<>
struct DataType< ::pal_interaction_msgs::recognizerServiceResponse>
{
  static const char* value()
  {
    return DataType< ::pal_interaction_msgs::recognizerService >::value();
  }
  static const char* value(const ::pal_interaction_msgs::recognizerServiceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PAL_INTERACTION_MSGS_MESSAGE_RECOGNIZERSERVICE_H