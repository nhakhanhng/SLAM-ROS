// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutourial_intefaces:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef TUTOURIAL_INTEFACES__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
#define TUTOURIAL_INTEFACES__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutourial_intefaces/srv/detail/add_three_ints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutourial_intefaces
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Request_c
{
public:
  explicit Init_AddThreeInts_Request_c(::tutourial_intefaces::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  ::tutourial_intefaces::srv::AddThreeInts_Request c(::tutourial_intefaces::srv::AddThreeInts_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutourial_intefaces::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_b
{
public:
  explicit Init_AddThreeInts_Request_b(::tutourial_intefaces::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  Init_AddThreeInts_Request_c b(::tutourial_intefaces::srv::AddThreeInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_AddThreeInts_Request_c(msg_);
  }

private:
  ::tutourial_intefaces::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_a
{
public:
  Init_AddThreeInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddThreeInts_Request_b a(::tutourial_intefaces::srv::AddThreeInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddThreeInts_Request_b(msg_);
  }

private:
  ::tutourial_intefaces::srv::AddThreeInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutourial_intefaces::srv::AddThreeInts_Request>()
{
  return tutourial_intefaces::srv::builder::Init_AddThreeInts_Request_a();
}

}  // namespace tutourial_intefaces


namespace tutourial_intefaces
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Response_sum
{
public:
  Init_AddThreeInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutourial_intefaces::srv::AddThreeInts_Response sum(::tutourial_intefaces::srv::AddThreeInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutourial_intefaces::srv::AddThreeInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutourial_intefaces::srv::AddThreeInts_Response>()
{
  return tutourial_intefaces::srv::builder::Init_AddThreeInts_Response_sum();
}

}  // namespace tutourial_intefaces

#endif  // TUTOURIAL_INTEFACES__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
