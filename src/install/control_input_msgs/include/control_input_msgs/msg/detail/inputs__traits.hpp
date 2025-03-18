// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_input_msgs:msg/Inputs.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_INPUT_MSGS__MSG__DETAIL__INPUTS__TRAITS_HPP_
#define CONTROL_INPUT_MSGS__MSG__DETAIL__INPUTS__TRAITS_HPP_

#include "control_input_msgs/msg/detail/inputs__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_input_msgs::msg::Inputs>()
{
  return "control_input_msgs::msg::Inputs";
}

template<>
inline const char * name<control_input_msgs::msg::Inputs>()
{
  return "control_input_msgs/msg/Inputs";
}

template<>
struct has_fixed_size<control_input_msgs::msg::Inputs>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<control_input_msgs::msg::Inputs>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<control_input_msgs::msg::Inputs>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_INPUT_MSGS__MSG__DETAIL__INPUTS__TRAITS_HPP_
