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
 * @file CompressedImage.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_COMPRESSEDIMAGE_H_
#define _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_COMPRESSEDIMAGE_H_

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
#if defined(COMPRESSEDIMAGE_SOURCE)
#define COMPRESSEDIMAGE_DllAPI __declspec( dllexport )
#else
#define COMPRESSEDIMAGE_DllAPI __declspec( dllimport )
#endif // COMPRESSEDIMAGE_SOURCE
#else
#define COMPRESSEDIMAGE_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define COMPRESSEDIMAGE_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace sensor_msgs {
    namespace msg {
        /*!
         * @brief This class represents the structure CompressedImage defined by the user in the IDL file.
         * @ingroup CompressedImage
         */
        class CompressedImage
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport CompressedImage();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~CompressedImage();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object sensor_msgs::msg::CompressedImage that will be copied.
             */
            eProsima_user_DllExport CompressedImage(
                    const CompressedImage& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object sensor_msgs::msg::CompressedImage that will be copied.
             */
            eProsima_user_DllExport CompressedImage(
                    CompressedImage&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object sensor_msgs::msg::CompressedImage that will be copied.
             */
            eProsima_user_DllExport CompressedImage& operator =(
                    const CompressedImage& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object sensor_msgs::msg::CompressedImage that will be copied.
             */
            eProsima_user_DllExport CompressedImage& operator =(
                    CompressedImage&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x sensor_msgs::msg::CompressedImage object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const CompressedImage& x) const;

            /*!
             * @brief Comparison operator.
             * @param x sensor_msgs::msg::CompressedImage object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const CompressedImage& x) const;

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
             * @brief This function copies the value in member format
             * @param _format New value to be copied in member format
             */
            eProsima_user_DllExport void format(
                    const std::string& _format);

            /*!
             * @brief This function moves the value in member format
             * @param _format New value to be moved in member format
             */
            eProsima_user_DllExport void format(
                    std::string&& _format);

            /*!
             * @brief This function returns a constant reference to member format
             * @return Constant reference to member format
             */
            eProsima_user_DllExport const std::string& format() const;

            /*!
             * @brief This function returns a reference to member format
             * @return Reference to member format
             */
            eProsima_user_DllExport std::string& format();
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
                    const sensor_msgs::msg::CompressedImage& data,
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
            std::string m_format;
            std::vector<uint8_t> m_data;

        };
    } // namespace msg
} // namespace sensor_msgs

#endif // _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_COMPRESSEDIMAGE_H_
