// Copyright 2015 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef __test_communication__message_fixtures__hpp__
#define __test_communication__message_fixtures__hpp__

#include <vector>

#include <test_communication/Empty.h>
#include <test_communication/Primitives.h>


std::vector<test_communication::Empty::Ptr>
get_messages_empty()
{
  std::vector<test_communication::Empty::Ptr> messages;
  auto msg = std::make_shared<test_communication::Empty>();
  messages.push_back(msg);
  return messages;
}

std::vector<test_communication::Primitives::Ptr>
get_messages_primitives()
{
  std::vector<test_communication::Primitives::Ptr> messages;
  {
    auto msg = std::make_shared<test_communication::Primitives>();
    msg->bool_value = false;
    msg->byte_value = 0;
    msg->char_value = '\0';
    msg->float32_value = 0.0f;
    msg->float64_value = 0;
    msg->int8_value = 0;
    msg->uint8_value = 0;
    msg->int16_value = 0;
    msg->uint16_value = 0;
    msg->int32_value = 0;
    msg->uint32_value = 0;
    msg->int64_value = 0;
    msg->uint64_value = 0;
    msg->string_value = "";
    messages.push_back(msg);
  }
  {
    auto msg = std::make_shared<test_communication::Primitives>();
    msg->bool_value = true;
    msg->byte_value = 255;
    msg->char_value = 0xff;
    msg->float32_value = 1.11f;
    msg->float64_value = 1.11;
    msg->int8_value = 127;
    msg->uint8_value = 255;
    msg->int16_value = 32767;
    msg->uint16_value = 65535;
    msg->int32_value = 2147483647;
    msg->uint32_value = 4294967295;
    msg->int64_value = 9223372036854775807;
    msg->uint64_value = 18446744073709551615UL;
    msg->string_value = "max value";
    messages.push_back(msg);
  }
  {
    auto msg = std::make_shared<test_communication::Primitives>();
    msg->bool_value = false;
    msg->byte_value = 0;
    msg->char_value = 0x0;
    msg->float32_value = -2.22f;
    msg->float64_value = -2.22;
    msg->int8_value = -128;
    msg->uint8_value = 0;
    msg->int16_value = -32768;
    msg->uint16_value = 0;
    msg->int32_value = -2147483648;
    msg->uint32_value = 0;
    msg->int64_value = -9223372036854775808UL;
    msg->uint64_value = 0;
    msg->string_value = "min value";
    messages.push_back(msg);
  }
  return messages;
}

#endif  // __test_communication__message_fixtures__hpp__