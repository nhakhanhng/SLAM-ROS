// Generated by gencpp from file cartographer_ros_msgs/WriteStateRequest.msg
// DO NOT EDIT!


#ifndef CARTOGRAPHER_ROS_MSGS_MESSAGE_WRITESTATEREQUEST_H
#define CARTOGRAPHER_ROS_MSGS_MESSAGE_WRITESTATEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cartographer_ros_msgs
{
template <class ContainerAllocator>
struct WriteStateRequest_
{
  typedef WriteStateRequest_<ContainerAllocator> Type;

  WriteStateRequest_()
    : filename()
    , include_unfinished_submaps(false)  {
    }
  WriteStateRequest_(const ContainerAllocator& _alloc)
    : filename(_alloc)
    , include_unfinished_submaps(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _filename_type;
  _filename_type filename;

   typedef uint8_t _include_unfinished_submaps_type;
  _include_unfinished_submaps_type include_unfinished_submaps;





  typedef boost::shared_ptr< ::cartographer_ros_msgs::WriteStateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cartographer_ros_msgs::WriteStateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct WriteStateRequest_

typedef ::cartographer_ros_msgs::WriteStateRequest_<std::allocator<void> > WriteStateRequest;

typedef boost::shared_ptr< ::cartographer_ros_msgs::WriteStateRequest > WriteStateRequestPtr;
typedef boost::shared_ptr< ::cartographer_ros_msgs::WriteStateRequest const> WriteStateRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cartographer_ros_msgs::WriteStateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cartographer_ros_msgs::WriteStateRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::cartographer_ros_msgs::WriteStateRequest_<ContainerAllocator1> & lhs, const ::cartographer_ros_msgs::WriteStateRequest_<ContainerAllocator2> & rhs)
{
  return lhs.filename == rhs.filename &&
    lhs.include_unfinished_submaps == rhs.include_unfinished_submaps;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::cartographer_ros_msgs::WriteStateRequest_<ContainerAllocator1> & lhs, const ::cartographer_ros_msgs::WriteStateRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace cartographer_ros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::WriteStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::WriteStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::WriteStateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::WriteStateRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::WriteStateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::WriteStateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cartographer_ros_msgs::WriteStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bfd12117d83df4fe52e78631c0c6b702";
  }

  static const char* value(const ::cartographer_ros_msgs::WriteStateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbfd12117d83df4feULL;
  static const uint64_t static_value2 = 0x52e78631c0c6b702ULL;
};

template<class ContainerAllocator>
struct DataType< ::cartographer_ros_msgs::WriteStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cartographer_ros_msgs/WriteStateRequest";
  }

  static const char* value(const ::cartographer_ros_msgs::WriteStateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cartographer_ros_msgs::WriteStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Copyright 2016 The Cartographer Authors\n"
"#\n"
"# Licensed under the Apache License, Version 2.0 (the \"License\");\n"
"# you may not use this file except in compliance with the License.\n"
"# You may obtain a copy of the License at\n"
"#\n"
"#      http://www.apache.org/licenses/LICENSE-2.0\n"
"#\n"
"# Unless required by applicable law or agreed to in writing, software\n"
"# distributed under the License is distributed on an \"AS IS\" BASIS,\n"
"# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n"
"# See the License for the specific language governing permissions and\n"
"# limitations under the License.\n"
"\n"
"string filename\n"
"bool include_unfinished_submaps\n"
;
  }

  static const char* value(const ::cartographer_ros_msgs::WriteStateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cartographer_ros_msgs::WriteStateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.filename);
      stream.next(m.include_unfinished_submaps);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WriteStateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cartographer_ros_msgs::WriteStateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cartographer_ros_msgs::WriteStateRequest_<ContainerAllocator>& v)
  {
    s << indent << "filename: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.filename);
    s << indent << "include_unfinished_submaps: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.include_unfinished_submaps);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CARTOGRAPHER_ROS_MSGS_MESSAGE_WRITESTATEREQUEST_H
