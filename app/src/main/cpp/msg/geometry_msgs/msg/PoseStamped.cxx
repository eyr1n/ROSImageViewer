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
 * @file PoseStamped.cpp
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

#include "PoseStamped.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define builtin_interfaces_msg_Time_max_cdr_typesize 8ULL;
#define geometry_msgs_msg_Pose_max_cdr_typesize 56ULL;
#define geometry_msgs_msg_PoseStamped_max_cdr_typesize 328ULL;
#define geometry_msgs_msg_Point_max_cdr_typesize 24ULL;
#define geometry_msgs_msg_Quaternion_max_cdr_typesize 32ULL;
#define std_msgs_msg_Header_max_cdr_typesize 268ULL;
#define builtin_interfaces_msg_Time_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_Pose_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_PoseStamped_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_Point_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_Quaternion_max_key_cdr_typesize 0ULL;
#define std_msgs_msg_Header_max_key_cdr_typesize 0ULL;

geometry_msgs::msg::PoseStamped::PoseStamped()
{
    // std_msgs::msg::Header m_header

    // geometry_msgs::msg::Pose m_pose


}

geometry_msgs::msg::PoseStamped::~PoseStamped()
{


}

geometry_msgs::msg::PoseStamped::PoseStamped(
        const PoseStamped& x)
{
    m_header = x.m_header;
    m_pose = x.m_pose;
}

geometry_msgs::msg::PoseStamped::PoseStamped(
        PoseStamped&& x) noexcept 
{
    m_header = std::move(x.m_header);
    m_pose = std::move(x.m_pose);
}

geometry_msgs::msg::PoseStamped& geometry_msgs::msg::PoseStamped::operator =(
        const PoseStamped& x)
{

    m_header = x.m_header;
    m_pose = x.m_pose;

    return *this;
}

geometry_msgs::msg::PoseStamped& geometry_msgs::msg::PoseStamped::operator =(
        PoseStamped&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_pose = std::move(x.m_pose);

    return *this;
}

bool geometry_msgs::msg::PoseStamped::operator ==(
        const PoseStamped& x) const
{

    return (m_header == x.m_header && m_pose == x.m_pose);
}

bool geometry_msgs::msg::PoseStamped::operator !=(
        const PoseStamped& x) const
{
    return !(*this == x);
}

size_t geometry_msgs::msg::PoseStamped::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return geometry_msgs_msg_PoseStamped_max_cdr_typesize;
}

size_t geometry_msgs::msg::PoseStamped::getCdrSerializedSize(
        const geometry_msgs::msg::PoseStamped& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += geometry_msgs::msg::Pose::getCdrSerializedSize(data.pose(), current_alignment);

    return current_alignment - initial_alignment;
}

void geometry_msgs::msg::PoseStamped::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_pose;

}

void geometry_msgs::msg::PoseStamped::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_pose;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void geometry_msgs::msg::PoseStamped::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void geometry_msgs::msg::PoseStamped::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& geometry_msgs::msg::PoseStamped::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& geometry_msgs::msg::PoseStamped::header()
{
    return m_header;
}
/*!
 * @brief This function copies the value in member pose
 * @param _pose New value to be copied in member pose
 */
void geometry_msgs::msg::PoseStamped::pose(
        const geometry_msgs::msg::Pose& _pose)
{
    m_pose = _pose;
}

/*!
 * @brief This function moves the value in member pose
 * @param _pose New value to be moved in member pose
 */
void geometry_msgs::msg::PoseStamped::pose(
        geometry_msgs::msg::Pose&& _pose)
{
    m_pose = std::move(_pose);
}

/*!
 * @brief This function returns a constant reference to member pose
 * @return Constant reference to member pose
 */
const geometry_msgs::msg::Pose& geometry_msgs::msg::PoseStamped::pose() const
{
    return m_pose;
}

/*!
 * @brief This function returns a reference to member pose
 * @return Reference to member pose
 */
geometry_msgs::msg::Pose& geometry_msgs::msg::PoseStamped::pose()
{
    return m_pose;
}


size_t geometry_msgs::msg::PoseStamped::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return geometry_msgs_msg_PoseStamped_max_key_cdr_typesize;
}

bool geometry_msgs::msg::PoseStamped::isKeyDefined()
{
    return false;
}

void geometry_msgs::msg::PoseStamped::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}



