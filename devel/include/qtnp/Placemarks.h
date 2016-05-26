// Generated by gencpp from file qtnp/Placemarks.msg
// DO NOT EDIT!


#ifndef QTNP_MESSAGE_PLACEMARKS_H
#define QTNP_MESSAGE_PLACEMARKS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <qtnp/Coordinates.h>

namespace qtnp
{
template <class ContainerAllocator>
struct Placemarks_
{
  typedef Placemarks_<ContainerAllocator> Type;

  Placemarks_()
    : placemarks()  {
    }
  Placemarks_(const ContainerAllocator& _alloc)
    : placemarks(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::qtnp::Coordinates_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::qtnp::Coordinates_<ContainerAllocator> >::other >  _placemarks_type;
  _placemarks_type placemarks;




  typedef boost::shared_ptr< ::qtnp::Placemarks_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::qtnp::Placemarks_<ContainerAllocator> const> ConstPtr;

}; // struct Placemarks_

typedef ::qtnp::Placemarks_<std::allocator<void> > Placemarks;

typedef boost::shared_ptr< ::qtnp::Placemarks > PlacemarksPtr;
typedef boost::shared_ptr< ::qtnp::Placemarks const> PlacemarksConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::qtnp::Placemarks_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::qtnp::Placemarks_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace qtnp

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'qtnp': ['/home/fotis/Dev/Workspaces/ROS/qTnP/src/qtnp/msg'], 'visualization_msgs': ['/opt/ros/indigo/share/visualization_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::qtnp::Placemarks_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::qtnp::Placemarks_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qtnp::Placemarks_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qtnp::Placemarks_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qtnp::Placemarks_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qtnp::Placemarks_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::qtnp::Placemarks_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d412150a28aefbf6a830287329e8685d";
  }

  static const char* value(const ::qtnp::Placemarks_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd412150a28aefbf6ULL;
  static const uint64_t static_value2 = 0xa830287329e8685dULL;
};

template<class ContainerAllocator>
struct DataType< ::qtnp::Placemarks_<ContainerAllocator> >
{
  static const char* value()
  {
    return "qtnp/Placemarks";
  }

  static const char* value(const ::qtnp::Placemarks_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::qtnp::Placemarks_<ContainerAllocator> >
{
  static const char* value()
  {
    return "qtnp/Coordinates[] placemarks \n\
\n\
================================================================================\n\
MSG: qtnp/Coordinates\n\
string placemark_type\n\
float64 seed_longitude\n\
float64 seed_latitude\n\
float64[] longitude\n\
float64[] latitude\n\
";
  }

  static const char* value(const ::qtnp::Placemarks_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::qtnp::Placemarks_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.placemarks);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Placemarks_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::qtnp::Placemarks_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::qtnp::Placemarks_<ContainerAllocator>& v)
  {
    s << indent << "placemarks[]" << std::endl;
    for (size_t i = 0; i < v.placemarks.size(); ++i)
    {
      s << indent << "  placemarks[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::qtnp::Coordinates_<ContainerAllocator> >::stream(s, indent + "    ", v.placemarks[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // QTNP_MESSAGE_PLACEMARKS_H
