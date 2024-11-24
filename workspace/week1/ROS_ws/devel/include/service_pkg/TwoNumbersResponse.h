// Generated by gencpp from file service_pkg/TwoNumbersResponse.msg
// DO NOT EDIT!


#ifndef SERVICE_PKG_MESSAGE_TWONUMBERSRESPONSE_H
#define SERVICE_PKG_MESSAGE_TWONUMBERSRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace service_pkg
{
template <class ContainerAllocator>
struct TwoNumbersResponse_
{
  typedef TwoNumbersResponse_<ContainerAllocator> Type;

  TwoNumbersResponse_()
    : sum(0)
    , product(0)
    , is_equal(false)  {
    }
  TwoNumbersResponse_(const ContainerAllocator& _alloc)
    : sum(0)
    , product(0)
    , is_equal(false)  {
  (void)_alloc;
    }



   typedef int32_t _sum_type;
  _sum_type sum;

   typedef int32_t _product_type;
  _product_type product;

   typedef uint8_t _is_equal_type;
  _is_equal_type is_equal;





  typedef boost::shared_ptr< ::service_pkg::TwoNumbersResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::service_pkg::TwoNumbersResponse_<ContainerAllocator> const> ConstPtr;

}; // struct TwoNumbersResponse_

typedef ::service_pkg::TwoNumbersResponse_<std::allocator<void> > TwoNumbersResponse;

typedef boost::shared_ptr< ::service_pkg::TwoNumbersResponse > TwoNumbersResponsePtr;
typedef boost::shared_ptr< ::service_pkg::TwoNumbersResponse const> TwoNumbersResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::service_pkg::TwoNumbersResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::service_pkg::TwoNumbersResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::service_pkg::TwoNumbersResponse_<ContainerAllocator1> & lhs, const ::service_pkg::TwoNumbersResponse_<ContainerAllocator2> & rhs)
{
  return lhs.sum == rhs.sum &&
    lhs.product == rhs.product &&
    lhs.is_equal == rhs.is_equal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::service_pkg::TwoNumbersResponse_<ContainerAllocator1> & lhs, const ::service_pkg::TwoNumbersResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace service_pkg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::service_pkg::TwoNumbersResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::service_pkg::TwoNumbersResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::service_pkg::TwoNumbersResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::service_pkg::TwoNumbersResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::service_pkg::TwoNumbersResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::service_pkg::TwoNumbersResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::service_pkg::TwoNumbersResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "219128328f5ff69c7b09c9e924a43c10";
  }

  static const char* value(const ::service_pkg::TwoNumbersResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x219128328f5ff69cULL;
  static const uint64_t static_value2 = 0x7b09c9e924a43c10ULL;
};

template<class ContainerAllocator>
struct DataType< ::service_pkg::TwoNumbersResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "service_pkg/TwoNumbersResponse";
  }

  static const char* value(const ::service_pkg::TwoNumbersResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::service_pkg::TwoNumbersResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 sum\n"
"int32 product\n"
"bool is_equal\n"
"\n"
"\n"
;
  }

  static const char* value(const ::service_pkg::TwoNumbersResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::service_pkg::TwoNumbersResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sum);
      stream.next(m.product);
      stream.next(m.is_equal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TwoNumbersResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::service_pkg::TwoNumbersResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::service_pkg::TwoNumbersResponse_<ContainerAllocator>& v)
  {
    s << indent << "sum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.sum);
    s << indent << "product: ";
    Printer<int32_t>::stream(s, indent + "  ", v.product);
    s << indent << "is_equal: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_equal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SERVICE_PKG_MESSAGE_TWONUMBERSRESPONSE_H