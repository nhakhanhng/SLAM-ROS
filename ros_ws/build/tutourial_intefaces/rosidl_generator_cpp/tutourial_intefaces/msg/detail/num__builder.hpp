// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutourial_intefaces:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef TUTOURIAL_INTEFACES__MSG__DETAIL__NUM__BUILDER_HPP_
#define TUTOURIAL_INTEFACES__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutourial_intefaces/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutourial_intefaces
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutourial_intefaces::msg::Num num(::tutourial_intefaces::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutourial_intefaces::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutourial_intefaces::msg::Num>()
{
  return tutourial_intefaces::msg::builder::Init_Num_num();
}

}  // namespace tutourial_intefaces

#endif  // TUTOURIAL_INTEFACES__MSG__DETAIL__NUM__BUILDER_HPP_
