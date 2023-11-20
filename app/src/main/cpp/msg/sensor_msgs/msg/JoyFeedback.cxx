// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

/*!
 * @file JoyFeedback.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "JoyFeedback.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define sensor_msgs_msg_JoyFeedback_max_cdr_typesize 8ULL;
#define sensor_msgs_msg_JoyFeedback_max_key_cdr_typesize 0ULL;





sensor_msgs::msg::JoyFeedback::JoyFeedback()
{
    // uint8 m_type
    m_type = 0;
    // uint8 m_id
    m_id = 0;
    // float m_intensity
    m_intensity = 0.0;

}

sensor_msgs::msg::JoyFeedback::~JoyFeedback()
{



}

sensor_msgs::msg::JoyFeedback::JoyFeedback(
        const JoyFeedback& x)
{
    m_type = x.m_type;
    m_id = x.m_id;
    m_intensity = x.m_intensity;
}

sensor_msgs::msg::JoyFeedback::JoyFeedback(
        JoyFeedback&& x) noexcept 
{
    m_type = x.m_type;
    m_id = x.m_id;
    m_intensity = x.m_intensity;
}

sensor_msgs::msg::JoyFeedback& sensor_msgs::msg::JoyFeedback::operator =(
        const JoyFeedback& x)
{

    m_type = x.m_type;
    m_id = x.m_id;
    m_intensity = x.m_intensity;

    return *this;
}

sensor_msgs::msg::JoyFeedback& sensor_msgs::msg::JoyFeedback::operator =(
        JoyFeedback&& x) noexcept
{

    m_type = x.m_type;
    m_id = x.m_id;
    m_intensity = x.m_intensity;

    return *this;
}

bool sensor_msgs::msg::JoyFeedback::operator ==(
        const JoyFeedback& x) const
{

    return (m_type == x.m_type && m_id == x.m_id && m_intensity == x.m_intensity);
}

bool sensor_msgs::msg::JoyFeedback::operator !=(
        const JoyFeedback& x) const
{
    return !(*this == x);
}

size_t sensor_msgs::msg::JoyFeedback::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return sensor_msgs_msg_JoyFeedback_max_cdr_typesize;
}

size_t sensor_msgs::msg::JoyFeedback::getCdrSerializedSize(
        const sensor_msgs::msg::JoyFeedback& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void sensor_msgs::msg::JoyFeedback::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_type;
    scdr << m_id;
    scdr << m_intensity;

}

void sensor_msgs::msg::JoyFeedback::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_type;
    dcdr >> m_id;
    dcdr >> m_intensity;
}

/*!
 * @brief This function sets a value in member type
 * @param _type New value for member type
 */
void sensor_msgs::msg::JoyFeedback::type(
        uint8_t _type)
{
    m_type = _type;
}

/*!
 * @brief This function returns the value of member type
 * @return Value of member type
 */
uint8_t sensor_msgs::msg::JoyFeedback::type() const
{
    return m_type;
}

/*!
 * @brief This function returns a reference to member type
 * @return Reference to member type
 */
uint8_t& sensor_msgs::msg::JoyFeedback::type()
{
    return m_type;
}

/*!
 * @brief This function sets a value in member id
 * @param _id New value for member id
 */
void sensor_msgs::msg::JoyFeedback::id(
        uint8_t _id)
{
    m_id = _id;
}

/*!
 * @brief This function returns the value of member id
 * @return Value of member id
 */
uint8_t sensor_msgs::msg::JoyFeedback::id() const
{
    return m_id;
}

/*!
 * @brief This function returns a reference to member id
 * @return Reference to member id
 */
uint8_t& sensor_msgs::msg::JoyFeedback::id()
{
    return m_id;
}

/*!
 * @brief This function sets a value in member intensity
 * @param _intensity New value for member intensity
 */
void sensor_msgs::msg::JoyFeedback::intensity(
        float _intensity)
{
    m_intensity = _intensity;
}

/*!
 * @brief This function returns the value of member intensity
 * @return Value of member intensity
 */
float sensor_msgs::msg::JoyFeedback::intensity() const
{
    return m_intensity;
}

/*!
 * @brief This function returns a reference to member intensity
 * @return Reference to member intensity
 */
float& sensor_msgs::msg::JoyFeedback::intensity()
{
    return m_intensity;
}



size_t sensor_msgs::msg::JoyFeedback::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return sensor_msgs_msg_JoyFeedback_max_key_cdr_typesize;
}

bool sensor_msgs::msg::JoyFeedback::isKeyDefined()
{
    return false;
}

void sensor_msgs::msg::JoyFeedback::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}



