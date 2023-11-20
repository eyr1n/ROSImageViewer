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
 * @file RelativeHumidity.cpp
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

#include "RelativeHumidity.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define sensor_msgs_msg_RelativeHumidity_max_cdr_typesize 288ULL;
#define builtin_interfaces_msg_Time_max_cdr_typesize 8ULL;
#define std_msgs_msg_Header_max_cdr_typesize 268ULL;
#define sensor_msgs_msg_RelativeHumidity_max_key_cdr_typesize 0ULL;
#define builtin_interfaces_msg_Time_max_key_cdr_typesize 0ULL;
#define std_msgs_msg_Header_max_key_cdr_typesize 0ULL;

sensor_msgs::msg::RelativeHumidity::RelativeHumidity()
{
    // std_msgs::msg::Header m_header

    // double m_relative_humidity
    m_relative_humidity = 0.0;
    // double m_variance
    m_variance = 0.0;

}

sensor_msgs::msg::RelativeHumidity::~RelativeHumidity()
{



}

sensor_msgs::msg::RelativeHumidity::RelativeHumidity(
        const RelativeHumidity& x)
{
    m_header = x.m_header;
    m_relative_humidity = x.m_relative_humidity;
    m_variance = x.m_variance;
}

sensor_msgs::msg::RelativeHumidity::RelativeHumidity(
        RelativeHumidity&& x) noexcept 
{
    m_header = std::move(x.m_header);
    m_relative_humidity = x.m_relative_humidity;
    m_variance = x.m_variance;
}

sensor_msgs::msg::RelativeHumidity& sensor_msgs::msg::RelativeHumidity::operator =(
        const RelativeHumidity& x)
{

    m_header = x.m_header;
    m_relative_humidity = x.m_relative_humidity;
    m_variance = x.m_variance;

    return *this;
}

sensor_msgs::msg::RelativeHumidity& sensor_msgs::msg::RelativeHumidity::operator =(
        RelativeHumidity&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_relative_humidity = x.m_relative_humidity;
    m_variance = x.m_variance;

    return *this;
}

bool sensor_msgs::msg::RelativeHumidity::operator ==(
        const RelativeHumidity& x) const
{

    return (m_header == x.m_header && m_relative_humidity == x.m_relative_humidity && m_variance == x.m_variance);
}

bool sensor_msgs::msg::RelativeHumidity::operator !=(
        const RelativeHumidity& x) const
{
    return !(*this == x);
}

size_t sensor_msgs::msg::RelativeHumidity::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return sensor_msgs_msg_RelativeHumidity_max_cdr_typesize;
}

size_t sensor_msgs::msg::RelativeHumidity::getCdrSerializedSize(
        const sensor_msgs::msg::RelativeHumidity& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

void sensor_msgs::msg::RelativeHumidity::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_relative_humidity;
    scdr << m_variance;

}

void sensor_msgs::msg::RelativeHumidity::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_relative_humidity;
    dcdr >> m_variance;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void sensor_msgs::msg::RelativeHumidity::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void sensor_msgs::msg::RelativeHumidity::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& sensor_msgs::msg::RelativeHumidity::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& sensor_msgs::msg::RelativeHumidity::header()
{
    return m_header;
}
/*!
 * @brief This function sets a value in member relative_humidity
 * @param _relative_humidity New value for member relative_humidity
 */
void sensor_msgs::msg::RelativeHumidity::relative_humidity(
        double _relative_humidity)
{
    m_relative_humidity = _relative_humidity;
}

/*!
 * @brief This function returns the value of member relative_humidity
 * @return Value of member relative_humidity
 */
double sensor_msgs::msg::RelativeHumidity::relative_humidity() const
{
    return m_relative_humidity;
}

/*!
 * @brief This function returns a reference to member relative_humidity
 * @return Reference to member relative_humidity
 */
double& sensor_msgs::msg::RelativeHumidity::relative_humidity()
{
    return m_relative_humidity;
}

/*!
 * @brief This function sets a value in member variance
 * @param _variance New value for member variance
 */
void sensor_msgs::msg::RelativeHumidity::variance(
        double _variance)
{
    m_variance = _variance;
}

/*!
 * @brief This function returns the value of member variance
 * @return Value of member variance
 */
double sensor_msgs::msg::RelativeHumidity::variance() const
{
    return m_variance;
}

/*!
 * @brief This function returns a reference to member variance
 * @return Reference to member variance
 */
double& sensor_msgs::msg::RelativeHumidity::variance()
{
    return m_variance;
}



size_t sensor_msgs::msg::RelativeHumidity::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return sensor_msgs_msg_RelativeHumidity_max_key_cdr_typesize;
}

bool sensor_msgs::msg::RelativeHumidity::isKeyDefined()
{
    return false;
}

void sensor_msgs::msg::RelativeHumidity::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}



