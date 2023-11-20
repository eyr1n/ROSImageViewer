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
 * @file TwistStamped.cpp
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

#include "TwistStamped.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define geometry_msgs_msg_Vector3_max_cdr_typesize 24ULL;
#define builtin_interfaces_msg_Time_max_cdr_typesize 8ULL;
#define geometry_msgs_msg_TwistStamped_max_cdr_typesize 320ULL;
#define geometry_msgs_msg_Twist_max_cdr_typesize 48ULL;
#define std_msgs_msg_Header_max_cdr_typesize 268ULL;
#define geometry_msgs_msg_Vector3_max_key_cdr_typesize 0ULL;
#define builtin_interfaces_msg_Time_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_TwistStamped_max_key_cdr_typesize 0ULL;
#define geometry_msgs_msg_Twist_max_key_cdr_typesize 0ULL;
#define std_msgs_msg_Header_max_key_cdr_typesize 0ULL;

geometry_msgs::msg::TwistStamped::TwistStamped()
{
    // std_msgs::msg::Header m_header

    // geometry_msgs::msg::Twist m_twist


}

geometry_msgs::msg::TwistStamped::~TwistStamped()
{


}

geometry_msgs::msg::TwistStamped::TwistStamped(
        const TwistStamped& x)
{
    m_header = x.m_header;
    m_twist = x.m_twist;
}

geometry_msgs::msg::TwistStamped::TwistStamped(
        TwistStamped&& x) noexcept 
{
    m_header = std::move(x.m_header);
    m_twist = std::move(x.m_twist);
}

geometry_msgs::msg::TwistStamped& geometry_msgs::msg::TwistStamped::operator =(
        const TwistStamped& x)
{

    m_header = x.m_header;
    m_twist = x.m_twist;

    return *this;
}

geometry_msgs::msg::TwistStamped& geometry_msgs::msg::TwistStamped::operator =(
        TwistStamped&& x) noexcept
{

    m_header = std::move(x.m_header);
    m_twist = std::move(x.m_twist);

    return *this;
}

bool geometry_msgs::msg::TwistStamped::operator ==(
        const TwistStamped& x) const
{

    return (m_header == x.m_header && m_twist == x.m_twist);
}

bool geometry_msgs::msg::TwistStamped::operator !=(
        const TwistStamped& x) const
{
    return !(*this == x);
}

size_t geometry_msgs::msg::TwistStamped::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return geometry_msgs_msg_TwistStamped_max_cdr_typesize;
}

size_t geometry_msgs::msg::TwistStamped::getCdrSerializedSize(
        const geometry_msgs::msg::TwistStamped& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += geometry_msgs::msg::Twist::getCdrSerializedSize(data.twist(), current_alignment);

    return current_alignment - initial_alignment;
}

void geometry_msgs::msg::TwistStamped::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_twist;

}

void geometry_msgs::msg::TwistStamped::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_twist;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void geometry_msgs::msg::TwistStamped::header(
        const std_msgs::msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void geometry_msgs::msg::TwistStamped::header(
        std_msgs::msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const std_msgs::msg::Header& geometry_msgs::msg::TwistStamped::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
std_msgs::msg::Header& geometry_msgs::msg::TwistStamped::header()
{
    return m_header;
}
/*!
 * @brief This function copies the value in member twist
 * @param _twist New value to be copied in member twist
 */
void geometry_msgs::msg::TwistStamped::twist(
        const geometry_msgs::msg::Twist& _twist)
{
    m_twist = _twist;
}

/*!
 * @brief This function moves the value in member twist
 * @param _twist New value to be moved in member twist
 */
void geometry_msgs::msg::TwistStamped::twist(
        geometry_msgs::msg::Twist&& _twist)
{
    m_twist = std::move(_twist);
}

/*!
 * @brief This function returns a constant reference to member twist
 * @return Constant reference to member twist
 */
const geometry_msgs::msg::Twist& geometry_msgs::msg::TwistStamped::twist() const
{
    return m_twist;
}

/*!
 * @brief This function returns a reference to member twist
 * @return Reference to member twist
 */
geometry_msgs::msg::Twist& geometry_msgs::msg::TwistStamped::twist()
{
    return m_twist;
}


size_t geometry_msgs::msg::TwistStamped::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return geometry_msgs_msg_TwistStamped_max_key_cdr_typesize;
}

bool geometry_msgs::msg::TwistStamped::isKeyDefined()
{
    return false;
}

void geometry_msgs::msg::TwistStamped::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}



