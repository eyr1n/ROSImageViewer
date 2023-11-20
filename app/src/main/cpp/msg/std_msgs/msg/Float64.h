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
 * @file Float64.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_STD_MSGS_MSG_FLOAT64_H_
#define _FAST_DDS_GENERATED_STD_MSGS_MSG_FLOAT64_H_


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
#if defined(FLOAT64_SOURCE)
#define FLOAT64_DllAPI __declspec( dllexport )
#else
#define FLOAT64_DllAPI __declspec( dllimport )
#endif // FLOAT64_SOURCE
#else
#define FLOAT64_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define FLOAT64_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace std_msgs {
    namespace msg {
        /*!
         * @brief This class represents the structure Float64 defined by the user in the IDL file.
         * @ingroup Float64
         */
        class Float64
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport Float64();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~Float64();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object std_msgs::msg::Float64 that will be copied.
             */
            eProsima_user_DllExport Float64(
                    const Float64& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object std_msgs::msg::Float64 that will be copied.
             */
            eProsima_user_DllExport Float64(
                    Float64&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object std_msgs::msg::Float64 that will be copied.
             */
            eProsima_user_DllExport Float64& operator =(
                    const Float64& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object std_msgs::msg::Float64 that will be copied.
             */
            eProsima_user_DllExport Float64& operator =(
                    Float64&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x std_msgs::msg::Float64 object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const Float64& x) const;

            /*!
             * @brief Comparison operator.
             * @param x std_msgs::msg::Float64 object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const Float64& x) const;

            /*!
             * @brief This function sets a value in member data
             * @param _data New value for member data
             */
            eProsima_user_DllExport void data(
                    double _data);

            /*!
             * @brief This function returns the value of member data
             * @return Value of member data
             */
            eProsima_user_DllExport double data() const;

            /*!
             * @brief This function returns a reference to member data
             * @return Reference to member data
             */
            eProsima_user_DllExport double& data();


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
                    const std_msgs::msg::Float64& data,
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

            double m_data;

        };
    } // namespace msg
} // namespace std_msgs

#endif // _FAST_DDS_GENERATED_STD_MSGS_MSG_FLOAT64_H_
