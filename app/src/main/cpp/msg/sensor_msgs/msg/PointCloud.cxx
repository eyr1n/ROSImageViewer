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
 * @file PointCloud.cpp
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

#include "PointCloud.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define geometry_msgs_msg_Point32_max_cdr_typesize 12ULL;
#define builtin_interfaces_msg_Time_max_cdr_typesize 8ULL;
#define sensor_msgs_msg_PointCloud_max_cdr_typesize 67876ULL;
#define sensor_msgs_msg_ChannelFloat32_max_cdr_typesize 664ULL;
#define std_msgs_msg_Header_max_cdr_typesize 268ULL;
#define geometry_msgs_msg_Point32_max_key_cdr_typesize 0ULL;
#define builtin_interfaces_msg_Time_max_key_cdr_typesize 0ULL;
#define sensor_msgs_msg_PointCloud_max_key_cdr_typesize 0ULL;
#define sensor_msgs_msg_ChannelFloat32_max_key_cdr_typesize 0ULL;
#define std_msgs_msg_Header_max_key_cdr_typesize 0ULL;

sensor_msgs::msg::PointCloud::PointCloud()
{
    // std_msgs::msg::Header m_header

    // sequence<geometry_msgs::msg::Point32> m_points

    // sequence<sensor_msgs::msg::ChannelFloat32> m_channels


}

sensor_msgs::msg::PointCloud::~PointCloud()
{



}

sensor_msgs::msg::PointCloud::PointCloud(
        const PointCloud& x)
{
    m_header = x.m_header;
    m_points = x.m_points;
    m_channels = x.m_channels;
}

sensor_msgs::msg::PointCloud::PointCloud(
        PointCloud&& x) noexcept 
{
    m_header = std::move(x.m_header);
    m_points = std::move(x.m_points);
    m_channels = std::move(x.m_channels);
}

sensor_msgs::msg::PointCloud& sensor_msgs::msg::PointCloud::operator =(
        const PointCloud& x)
{

    m_header = x.m_header;
    m_points = x.m_points;
    m_channels = x.m_channels;

    return *this;
}

sensor_msgs::msg::PointCloud& sensor_msgs::msg::PointCloud::operator =(
        PointCloud&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_points = std::move(x.m_points);
    m_channels = std::move(x.m_channels);

    return *this;
}

bool sensor_msgs::msg::PointCloud::operator ==(
        const PointCloud& x) const
{

    return (m_header == x.m_header && m_points == x.m_points && m_channels == x.m_channels);
}

bool sensor_msgs::msg::PointCloud::operator !=(
        const PointCloud& x) const
{
    return !(*this == x);
}

size_t sensor_msgs::msg::PointCloud::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return sensor_msgs_msg_PointCloud_max_cdr_typesize;
}

size_t sensor_msgs::msg::PointCloud::getCdrSerializedSize(
        const sensor_msgs::msg::PointCloud& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.points().size(); ++a)
    {
        current_alignment += geometry_msgs::msg::Point32::getCdrSerializedSize(data.points().at(a), current_alignment);}

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    for(size_t a = 0; a < data.channels().size(); ++a)
    {
        current_alignment += sensor_msgs::msg::ChannelFloat32::getCdrSerializedSize(data.channels().at(a), current_alignment);}


    return current_alignment - initial_alignment;
}

void sensor_msgs::msg::PointCloud::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_points;
    scdr << m_channels;

}

void sensor_msgs::msg::PointCloud::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_points;
    dcdr >> m_channels;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void sensor_msgs::msg::PointCloud::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void sensor_msgs::msg::PointCloud::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& sensor_msgs::msg::PointCloud::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& sensor_msgs::msg::PointCloud::header()
{
    return m_header;
}
/*!
 * @brief This function copies the value in member points
 * @param _points New value to be copied in member points
 */
void sensor_msgs::msg::PointCloud::points(
        const std::vector<geometry_msgs::msg::Point32>& _points)
{
    m_points = _points;
}

/*!
 * @brief This function moves the value in member points
 * @param _points New value to be moved in member points
 */
void sensor_msgs::msg::PointCloud::points(
        std::vector<geometry_msgs::msg::Point32>&& _points)
{
    m_points = std::move(_points);
}

/*!
 * @brief This function returns a constant reference to member points
 * @return Constant reference to member points
 */
const std::vector<geometry_msgs::msg::Point32>& sensor_msgs::msg::PointCloud::points() const
{
    return m_points;
}

/*!
 * @brief This function returns a reference to member points
 * @return Reference to member points
 */
std::vector<geometry_msgs::msg::Point32>& sensor_msgs::msg::PointCloud::points()
{
    return m_points;
}
/*!
 * @brief This function copies the value in member channels
 * @param _channels New value to be copied in member channels
 */
void sensor_msgs::msg::PointCloud::channels(
        const std::vector<sensor_msgs::msg::ChannelFloat32>& _channels)
{
    m_channels = _channels;
}

/*!
 * @brief This function moves the value in member channels
 * @param _channels New value to be moved in member channels
 */
void sensor_msgs::msg::PointCloud::channels(
        std::vector<sensor_msgs::msg::ChannelFloat32>&& _channels)
{
    m_channels = std::move(_channels);
}

/*!
 * @brief This function returns a constant reference to member channels
 * @return Constant reference to member channels
 */
const std::vector<sensor_msgs::msg::ChannelFloat32>& sensor_msgs::msg::PointCloud::channels() const
{
    return m_channels;
}

/*!
 * @brief This function returns a reference to member channels
 * @return Reference to member channels
 */
std::vector<sensor_msgs::msg::ChannelFloat32>& sensor_msgs::msg::PointCloud::channels()
{
    return m_channels;
}


size_t sensor_msgs::msg::PointCloud::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return sensor_msgs_msg_PointCloud_max_key_cdr_typesize;
}

bool sensor_msgs::msg::PointCloud::isKeyDefined()
{
    return false;
}

void sensor_msgs::msg::PointCloud::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}



