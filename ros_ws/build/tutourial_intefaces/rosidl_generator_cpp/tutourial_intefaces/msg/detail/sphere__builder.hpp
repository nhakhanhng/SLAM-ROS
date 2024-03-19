// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutourial_intefaces:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef TUTOURIAL_INTEFACES__MSG__DETAIL__SPHERE__BUILDER_HPP_
#define TUTOURIAL_INTEFACES__MSG__DETAIL__SPHERE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutourial_intefaces/msg/detail/sphere__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutourial_intefaces
{

namespace msg
{

namespace builder
{

class Init_Sphere_radius
{
public:
  explicit Init_Sphere_radius(::tutourial_intefaces::msg::Sphere & msg)
  : msg_(msg)
  {}
  ::tutourial_intefaces::msg::Sphere radius(::tutourial_intefaces::msg::Sphere::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutourial_intefaces::msg::Sphere msg_;
};

class Init_Sphere_center
{
public:
  Init_Sphere_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sphere_radius center(::tutourial_intefaces::msg::Sphere::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_Sphere_radius(msg_);
  }

private:
  ::tutourial_intefaces::msg::Sphere msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutourial_intefaces::msg::Sphere>()
{
  return tutourial_intefaces::msg::builder::Init_Sphere_center();
}

}  // namespace tutourial_intefaces

#endif  // TUTOURIAL_INTEFACES__MSG__DETAIL__SPHERE__BUILDER_HPP_
