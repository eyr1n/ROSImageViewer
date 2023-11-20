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
 * @file Int8MultiArray.cpp
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

#include "Int8MultiArray.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

#define std_msgs_msg_Int8MultiArray_max_cdr_typesize 26912ULL;
#define std_msgs_msg_MultiArrayLayout_max_cdr_typesize 26808ULL;
#define std_msgs_msg_MultiArrayDimension_max_cdr_typesize 268ULL;
#define std_msgs_msg_Int8MultiArray_max_key_cdr_typesize 0ULL;
#define std_msgs_msg_MultiArrayLayout_max_key_cdr_typesize 0ULL;
#define std_msgs_msg_MultiArrayDimension_max_key_cdr_typesize 0ULL;

std_msgs::msg::Int8MultiArray::Int8MultiArray()
{
    // std_msgs::msg::MultiArrayLayout m_layout

    // sequence<int8> m_data


}

std_msgs::msg::Int8MultiArray::~Int8MultiArray()
{


}

std_msgs::msg::Int8MultiArray::Int8MultiArray(
        const Int8MultiArray& x)
{
    m_layout = x.m_layout;
    m_data = x.m_data;
}

std_msgs::msg::Int8MultiArray::Int8MultiArray(
        Int8MultiArray&& x) noexcept 
{
    m_layout = std::move(x.m_layout);
    m_data = std::move(x.m_data);
}

std_msgs::msg::Int8MultiArray& std_msgs::msg::Int8MultiArray::operator =(
        const Int8MultiArray& x)
{

    m_layout = x.m_layout;
    m_data = x.m_data;

    return *this;
}

std_msgs::msg::Int8MultiArray& std_msgs::msg::Int8MultiArray::operator =(
        Int8MultiArray&& x) noexcept
{

    m_layout = std::move(x.m_layout);
    m_data = std::move(x.m_data);

    return *this;
}

bool std_msgs::msg::Int8MultiArray::operator ==(
        const Int8MultiArray& x) const
{

    return (m_layout == x.m_layout && m_data == x.m_data);
}

bool std_msgs::msg::Int8MultiArray::operator !=(
        const Int8MultiArray& x) const
{
    return !(*this == x);
}

size_t std_msgs::msg::Int8MultiArray::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return std_msgs_msg_Int8MultiArray_max_cdr_typesize;
}

size_t std_msgs::msg::Int8MultiArray::getCdrSerializedSize(
        const std_msgs::msg::Int8MultiArray& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += std_msgs::msg::MultiArrayLayout::getCdrSerializedSize(data.layout(), current_alignment);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.data().size() > 0)
    {
        current_alignment += (data.data().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }




    return current_alignment - initial_alignment;
}

void std_msgs::msg::Int8MultiArray::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_layout;
    scdr << m_data;

}

void std_msgs::msg::Int8MultiArray::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_layout;
    dcdr >> m_data;
}

/*!
 * @brief This function copies the value in member layout
 * @param _layout New value to be copied in member layout
 */
void std_msgs::msg::Int8MultiArray::layout(
        const std_msgs::msg::MultiArrayLayout& _layout)
{
    m_layout = _layout;
}

/*!
 * @brief This function moves the value in member layout
 * @param _layout New value to be moved in member layout
 */
void std_msgs::msg::Int8MultiArray::layout(
        std_msgs::msg::MultiArrayLayout&& _layout)
{
    m_layout = std::move(_layout);
}

/*!
 * @brief This function returns a constant reference to member layout
 * @return Constant reference to member layout
 */
const std_msgs::msg::MultiArrayLayout& std_msgs::msg::Int8MultiArray::layout() const
{
    return m_layout;
}

/*!
 * @brief This function returns a reference to member layout
 * @return Reference to member layout
 */
std_msgs::msg::MultiArrayLayout& std_msgs::msg::Int8MultiArray::layout()
{
    return m_layout;
}
/*!
 * @brief This function copies the value in member data
 * @param _data New value to be copied in member data
 */
void std_msgs::msg::Int8MultiArray::data(
        const std::vector<int8_t>& _data)
{
    m_data = _data;
}

/*!
 * @brief This function moves the value in member data
 * @param _data New value to be moved in member data
 */
void std_msgs::msg::Int8MultiArray::data(
        std::vector<int8_t>&& _data)
{
    m_data = std::move(_data);
}

/*!
 * @brief This function returns a constant reference to member data
 * @return Constant reference to member data
 */
const std::vector<int8_t>& std_msgs::msg::Int8MultiArray::data() const
{
    return m_data;
}

/*!
 * @brief This function returns a reference to member data
 * @return Reference to member data
 */
std::vector<int8_t>& std_msgs::msg::Int8MultiArray::data()
{
    return m_data;
}


size_t std_msgs::msg::Int8MultiArray::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return std_msgs_msg_Int8MultiArray_max_key_cdr_typesize;
}

bool std_msgs::msg::Int8MultiArray::isKeyDefined()
{
    return false;
}

void std_msgs::msg::Int8MultiArray::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}



