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
 * @file JointState.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_JOINTSTATE_H_
#define _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_JOINTSTATE_H_

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
#if defined(JOINTSTATE_SOURCE)
#define JOINTSTATE_DllAPI __declspec( dllexport )
#else
#define JOINTSTATE_DllAPI __declspec( dllimport )
#endif // JOINTSTATE_SOURCE
#else
#define JOINTSTATE_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define JOINTSTATE_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace sensor_msgs {
    namespace msg {
        /*!
         * @brief This class represents the structure JointState defined by the user in the IDL file.
         * @ingroup JointState
         */
        class JointState
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport JointState();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~JointState();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object sensor_msgs::msg::JointState that will be copied.
             */
            eProsima_user_DllExport JointState(
                    const JointState& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object sensor_msgs::msg::JointState that will be copied.
             */
            eProsima_user_DllExport JointState(
                    JointState&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object sensor_msgs::msg::JointState that will be copied.
             */
            eProsima_user_DllExport JointState& operator =(
                    const JointState& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object sensor_msgs::msg::JointState that will be copied.
             */
            eProsima_user_DllExport JointState& operator =(
                    JointState&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x sensor_msgs::msg::JointState object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const JointState& x) const;

            /*!
             * @brief Comparison operator.
             * @param x sensor_msgs::msg::JointState object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const JointState& x) const;

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
             * @brief This function copies the value in member name
             * @param _name New value to be copied in member name
             */
            eProsima_user_DllExport void name(
                    const std::vector<std::string>& _name);

            /*!
             * @brief This function moves the value in member name
             * @param _name New value to be moved in member name
             */
            eProsima_user_DllExport void name(
                    std::vector<std::string>&& _name);

            /*!
             * @brief This function returns a constant reference to member name
             * @return Constant reference to member name
             */
            eProsima_user_DllExport const std::vector<std::string>& name() const;

            /*!
             * @brief This function returns a reference to member name
             * @return Reference to member name
             */
            eProsima_user_DllExport std::vector<std::string>& name();
            /*!
             * @brief This function copies the value in member position
             * @param _position New value to be copied in member position
             */
            eProsima_user_DllExport void position(
                    const std::vector<double>& _position);

            /*!
             * @brief This function moves the value in member position
             * @param _position New value to be moved in member position
             */
            eProsima_user_DllExport void position(
                    std::vector<double>&& _position);

            /*!
             * @brief This function returns a constant reference to member position
             * @return Constant reference to member position
             */
            eProsima_user_DllExport const std::vector<double>& position() const;

            /*!
             * @brief This function returns a reference to member position
             * @return Reference to member position
             */
            eProsima_user_DllExport std::vector<double>& position();
            /*!
             * @brief This function copies the value in member velocity
             * @param _velocity New value to be copied in member velocity
             */
            eProsima_user_DllExport void velocity(
                    const std::vector<double>& _velocity);

            /*!
             * @brief This function moves the value in member velocity
             * @param _velocity New value to be moved in member velocity
             */
            eProsima_user_DllExport void velocity(
                    std::vector<double>&& _velocity);

            /*!
             * @brief This function returns a constant reference to member velocity
             * @return Constant reference to member velocity
             */
            eProsima_user_DllExport const std::vector<double>& velocity() const;

            /*!
             * @brief This function returns a reference to member velocity
             * @return Reference to member velocity
             */
            eProsima_user_DllExport std::vector<double>& velocity();
            /*!
             * @brief This function copies the value in member effort
             * @param _effort New value to be copied in member effort
             */
            eProsima_user_DllExport void effort(
                    const std::vector<double>& _effort);

            /*!
             * @brief This function moves the value in member effort
             * @param _effort New value to be moved in member effort
             */
            eProsima_user_DllExport void effort(
                    std::vector<double>&& _effort);

            /*!
             * @brief This function returns a constant reference to member effort
             * @return Constant reference to member effort
             */
            eProsima_user_DllExport const std::vector<double>& effort() const;

            /*!
             * @brief This function returns a reference to member effort
             * @return Reference to member effort
             */
            eProsima_user_DllExport std::vector<double>& effort();

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
                    const sensor_msgs::msg::JointState& data,
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
            std::vector<std::string> m_name;
            std::vector<double> m_position;
            std::vector<double> m_velocity;
            std::vector<double> m_effort;

        };
    } // namespace msg
} // namespace sensor_msgs

#endif // _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_JOINTSTATE_H_
