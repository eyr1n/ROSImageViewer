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
 * @file Image.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_IMAGE_H_
#define _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_IMAGE_H_

#include "std_msgs/msg/Header.h"

#include <fastrtps/utils/fixed_size_string.hpp>

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(IMAGE_SOURCE)
#define IMAGE_DllAPI __declspec( dllexport )
#else
#define IMAGE_DllAPI __declspec( dllimport )
#endif // IMAGE_SOURCE
#else
#define IMAGE_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define IMAGE_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace sensor_msgs {
    namespace msg {
        /*!
         * @brief This class represents the structure Image defined by the user in the IDL file.
         * @ingroup Image
         */
        class Image
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport Image();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~Image();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object sensor_msgs::msg::Image that will be copied.
             */
            eProsima_user_DllExport Image(
                    const Image& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object sensor_msgs::msg::Image that will be copied.
             */
            eProsima_user_DllExport Image(
                    Image&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object sensor_msgs::msg::Image that will be copied.
             */
            eProsima_user_DllExport Image& operator =(
                    const Image& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object sensor_msgs::msg::Image that will be copied.
             */
            eProsima_user_DllExport Image& operator =(
                    Image&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x sensor_msgs::msg::Image object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const Image& x) const;

            /*!
             * @brief Comparison operator.
             * @param x sensor_msgs::msg::Image object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const Image& x) const;

            /*!
             * @brief This function copies the value in member header
             * @param _header New value to be copied in member header
             */
            eProsima_user_DllExport void header(
                    const std_msgs::msg::Header& _header);

            /*!
             * @brief This function moves the value in member header
             * @param _header New value to be moved in member header
             */
            eProsima_user_DllExport void header(
                    std_msgs::msg::Header&& _header);

            /*!
             * @brief This function returns a constant reference to member header
             * @return Constant reference to member header
             */
            eProsima_user_DllExport const std_msgs::msg::Header& header() const;

            /*!
             * @brief This function returns a reference to member header
             * @return Reference to member header
             */
            eProsima_user_DllExport std_msgs::msg::Header& header();
            /*!
             * @brief This function sets a value in member height
             * @param _height New value for member height
             */
            eProsima_user_DllExport void height(
                    uint32_t _height);

            /*!
             * @brief This function returns the value of member height
             * @return Value of member height
             */
            eProsima_user_DllExport uint32_t height() const;

            /*!
             * @brief This function returns a reference to member height
             * @return Reference to member height
             */
            eProsima_user_DllExport uint32_t& height();

            /*!
             * @brief This function sets a value in member width
             * @param _width New value for member width
             */
            eProsima_user_DllExport void width(
                    uint32_t _width);

            /*!
             * @brief This function returns the value of member width
             * @return Value of member width
             */
            eProsima_user_DllExport uint32_t width() const;

            /*!
             * @brief This function returns a reference to member width
             * @return Reference to member width
             */
            eProsima_user_DllExport uint32_t& width();

            /*!
             * @brief This function copies the value in member encoding
             * @param _encoding New value to be copied in member encoding
             */
            eProsima_user_DllExport void encoding(
                    const std::string& _encoding);

            /*!
             * @brief This function moves the value in member encoding
             * @param _encoding New value to be moved in member encoding
             */
            eProsima_user_DllExport void encoding(
                    std::string&& _encoding);

            /*!
             * @brief This function returns a constant reference to member encoding
             * @return Constant reference to member encoding
             */
            eProsima_user_DllExport const std::string& encoding() const;

            /*!
             * @brief This function returns a reference to member encoding
             * @return Reference to member encoding
             */
            eProsima_user_DllExport std::string& encoding();
            /*!
             * @brief This function sets a value in member is_bigendian
             * @param _is_bigendian New value for member is_bigendian
             */
            eProsima_user_DllExport void is_bigendian(
                    uint8_t _is_bigendian);

            /*!
             * @brief This function returns the value of member is_bigendian
             * @return Value of member is_bigendian
             */
            eProsima_user_DllExport uint8_t is_bigendian() const;

            /*!
             * @brief This function returns a reference to member is_bigendian
             * @return Reference to member is_bigendian
             */
            eProsima_user_DllExport uint8_t& is_bigendian();

            /*!
             * @brief This function sets a value in member step
             * @param _step New value for member step
             */
            eProsima_user_DllExport void step(
                    uint32_t _step);

            /*!
             * @brief This function returns the value of member step
             * @return Value of member step
             */
            eProsima_user_DllExport uint32_t step() const;

            /*!
             * @brief This function returns a reference to member step
             * @return Reference to member step
             */
            eProsima_user_DllExport uint32_t& step();

            /*!
             * @brief This function copies the value in member data
             * @param _data New value to be copied in member data
             */
            eProsima_user_DllExport void data(
                    const std::vector<uint8_t>& _data);

            /*!
             * @brief This function moves the value in member data
             * @param _data New value to be moved in member data
             */
            eProsima_user_DllExport void data(
                    std::vector<uint8_t>&& _data);

            /*!
             * @brief This function returns a constant reference to member data
             * @return Constant reference to member data
             */
            eProsima_user_DllExport const std::vector<uint8_t>& data() const;

            /*!
             * @brief This function returns a reference to member data
             * @return Reference to member data
             */
            eProsima_user_DllExport std::vector<uint8_t>& data();

            /*!
            * @brief This function returns the maximum serialized size of an object
            * depending on the buffer alignment.
            * @param current_alignment Buffer alignment.
            * @return Maximum serialized size.
            */
            eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function returns the serialized size of a data depending on the buffer alignment.
             * @param data Data which is calculated its serialized size.
             * @param current_alignment Buffer alignment.
             * @return Serialized size.
             */
            eProsima_user_DllExport static size_t getCdrSerializedSize(
                    const sensor_msgs::msg::Image& data,
                    size_t current_alignment = 0);


            /*!
             * @brief This function serializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serialize(
                    eprosima::fastcdr::Cdr& cdr) const;

            /*!
             * @brief This function deserializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void deserialize(
                    eprosima::fastcdr::Cdr& cdr);



            /*!
             * @brief This function returns the maximum serialized size of the Key of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function tells you if the Key has been defined for this type
             */
            eProsima_user_DllExport static bool isKeyDefined();

            /*!
             * @brief This function serializes the key members of an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serializeKey(
                    eprosima::fastcdr::Cdr& cdr) const;

        private:

            std_msgs::msg::Header m_header;
            uint32_t m_height;
            uint32_t m_width;
            std::string m_encoding;
            uint8_t m_is_bigendian;
            uint32_t m_step;
            std::vector<uint8_t> m_data;

        };
    } // namespace msg
} // namespace sensor_msgs

#endif // _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_IMAGE_H_

