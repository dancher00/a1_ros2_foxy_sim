// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from control_input_msgs:msg/Inputs.idl
// generated code does not contain a copyright notice
#include "control_input_msgs/msg/detail/inputs__rosidl_typesupport_fastrtps_cpp.hpp"
#include "control_input_msgs/msg/detail/inputs__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace control_input_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_input_msgs
cdr_serialize(
  const control_input_msgs::msg::Inputs & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: command
  cdr << ros_message.command;
  // Member: lx
  cdr << ros_message.lx;
  // Member: ly
  cdr << ros_message.ly;
  // Member: rx
  cdr << ros_message.rx;
  // Member: ry
  cdr << ros_message.ry;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_input_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  control_input_msgs::msg::Inputs & ros_message)
{
  // Member: command
  cdr >> ros_message.command;

  // Member: lx
  cdr >> ros_message.lx;

  // Member: ly
  cdr >> ros_message.ly;

  // Member: rx
  cdr >> ros_message.rx;

  // Member: ry
  cdr >> ros_message.ry;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_input_msgs
get_serialized_size(
  const control_input_msgs::msg::Inputs & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: command
  {
    size_t item_size = sizeof(ros_message.command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lx
  {
    size_t item_size = sizeof(ros_message.lx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ly
  {
    size_t item_size = sizeof(ros_message.ly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rx
  {
    size_t item_size = sizeof(ros_message.rx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ry
  {
    size_t item_size = sizeof(ros_message.ry);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_input_msgs
max_serialized_size_Inputs(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: command
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ly
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ry
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Inputs__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const control_input_msgs::msg::Inputs *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Inputs__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<control_input_msgs::msg::Inputs *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Inputs__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const control_input_msgs::msg::Inputs *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Inputs__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Inputs(full_bounded, 0);
}

static message_type_support_callbacks_t _Inputs__callbacks = {
  "control_input_msgs::msg",
  "Inputs",
  _Inputs__cdr_serialize,
  _Inputs__cdr_deserialize,
  _Inputs__get_serialized_size,
  _Inputs__max_serialized_size
};

static rosidl_message_type_support_t _Inputs__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Inputs__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace control_input_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_control_input_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<control_input_msgs::msg::Inputs>()
{
  return &control_input_msgs::msg::typesupport_fastrtps_cpp::_Inputs__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, control_input_msgs, msg, Inputs)() {
  return &control_input_msgs::msg::typesupport_fastrtps_cpp::_Inputs__handle;
}

#ifdef __cplusplus
}
#endif
