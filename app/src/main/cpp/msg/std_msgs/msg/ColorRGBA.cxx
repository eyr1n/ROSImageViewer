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
 * @file ColorRGBA.cpp
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

#include "ColorRGBA.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define std_msgs_msg_ColorRGBA_max_cdr_typesize 16ULL;
#define std_msgs_msg_ColorRGBA_max_key_cdr_typesize 0ULL;

std_msgs::msg::ColorRGBA::ColorRGBA()
{
    // float m_r
    m_r = 0.0;
    // float m_g
    m_g = 0.0;
    // float m_b
    m_b = 0.0;
    // float m_a
    m_a = 0.0;

}

std_msgs::msg::ColorRGBA::~ColorRGBA()
{




}

std_msgs::msg::ColorRGBA::ColorRGBA(
        const ColorRGBA& x)
{
    m_r = x.m_r;
    m_g = x.m_g;
    m_b = x.m_b;
    m_a = x.m_a;
}

std_msgs::msg::ColorRGBA::ColorRGBA(
        ColorRGBA&& x) noexcept 
{
    m_r = x.m_r;
    m_g = x.m_g;
    m_b = x.m_b;
    m_a = x.m_a;
}

std_msgs::msg::ColorRGBA& std_msgs::msg::ColorRGBA::operator =(
        const ColorRGBA& x)
{

    m_r = x.m_r;
    m_g = x.m_g;
    m_b = x.m_b;
    m_a = x.m_a;

    return *this;
}

std_msgs::msg::ColorRGBA& std_msgs::msg::ColorRGBA::operator =(
        ColorRGBA&& x) noexcept
{

    m_r = x.m_r;
    m_g = x.m_g;
    m_b = x.m_b;
    m_a = x.m_a;

    return *this;
}

bool std_msgs::msg::ColorRGBA::operator ==(
        const ColorRGBA& x) const
{

    return (m_r == x.m_r && m_g == x.m_g && m_b == x.m_b && m_a == x.m_a);
}

bool std_msgs::msg::ColorRGBA::operator !=(
        const ColorRGBA& x) const
{
    return !(*this == x);
}

size_t std_msgs::msg::ColorRGBA::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return std_msgs_msg_ColorRGBA_max_cdr_typesize;
}

size_t std_msgs::msg::ColorRGBA::getCdrSerializedSize(
        const std_msgs::msg::ColorRGBA& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void std_msgs::msg::ColorRGBA::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_r;
    scdr << m_g;
    scdr << m_b;
    scdr << m_a;

}

void std_msgs::msg::ColorRGBA::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_r;
    dcdr >> m_g;
    dcdr >> m_b;
    dcdr >> m_a;
}

/*!
 * @brief This function sets a value in member r
 * @param _r New value for member r
 */
void std_msgs::msg::ColorRGBA::r(
        float _r)
{
    m_r = _r;
}

/*!
 * @brief This function returns the value of member r
 * @return Value of member r
 */
float std_msgs::msg::ColorRGBA::r() const
{
    return m_r;
}

/*!
 * @brief This function returns a reference to member r
 * @return Reference to member r
 */
float& std_msgs::msg::ColorRGBA::r()
{
    return m_r;
}

/*!
 * @brief This function sets a value in member g
 * @param _g New value for member g
 */
void std_msgs::msg::ColorRGBA::g(
        float _g)
{
    m_g = _g;
}

/*!
 * @brief This function returns the value of member g
 * @return Value of member g
 */
float std_msgs::msg::ColorRGBA::g() const
{
    return m_g;
}

/*!
 * @brief This function returns a reference to member g
 * @return Reference to member g
 */
float& std_msgs::msg::ColorRGBA::g()
{
    return m_g;
}

/*!
 * @brief This function sets a value in member b
 * @param _b New value for member b
 */
void std_msgs::msg::ColorRGBA::b(
        float _b)
{
    m_b = _b;
}

/*!
 * @brief This function returns the value of member b
 * @return Value of member b
 */
float std_msgs::msg::ColorRGBA::b() const
{
    return m_b;
}

/*!
 * @brief This function returns a reference to member b
 * @return Reference to member b
 */
float& std_msgs::msg::ColorRGBA::b()
{
    return m_b;
}

/*!
 * @brief This function sets a value in member a
 * @param _a New value for member a
 */
void std_msgs::msg::ColorRGBA::a(
        float _a)
{
    m_a = _a;
}

/*!
 * @brief This function returns the value of member a
 * @return Value of member a
 */
float std_msgs::msg::ColorRGBA::a() const
{
    return m_a;
}

/*!
 * @brief This function returns a reference to member a
 * @return Reference to member a
 */
float& std_msgs::msg::ColorRGBA::a()
{
    return m_a;
}



size_t std_msgs::msg::ColorRGBA::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return std_msgs_msg_ColorRGBA_max_key_cdr_typesize;
}

bool std_msgs::msg::ColorRGBA::isKeyDefined()
{
    return false;
}

void std_msgs::msg::ColorRGBA::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}



