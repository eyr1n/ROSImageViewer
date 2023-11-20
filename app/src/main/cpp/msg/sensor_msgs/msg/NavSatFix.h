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
 * @file NavSatFix.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_NAVSATFIX_H_
#define _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_NAVSATFIX_H_

#include "std_msgs/msg/Header.h"
#include "NavSatStatus.h"

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
#if defined(NAVSATFIX_SOURCE)
#define NAVSATFIX_DllAPI __declspec( dllexport )
#else
#define NAVSATFIX_DllAPI __declspec( dllimport )
#endif // NAVSATFIX_SOURCE
#else
#define NAVSATFIX_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define NAVSATFIX_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace sensor_msgs {
    namespace msg {
        typedef std::array<double, 9> double__9;
        namespace NavSatFix_Constants {
            const uint8_t COVARIANCE_TYPE_UNKNOWN = 0;
            const uint8_t COVARIANCE_TYPE_APPROXIMATED = 1;
            const uint8_t COVARIANCE_TYPE_DIAGONAL_KNOWN = 2;
            const uint8_t COVARIANCE_TYPE_KNOWN = 3;
        } // namespace NavSatFix_Constants
        /*!
         * @brief This class represents the structure NavSatFix defined by the user in the IDL file.
         * @ingroup NavSatFix
         */
        class NavSatFix
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport NavSatFix();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~NavSatFix();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object sensor_msgs::msg::NavSatFix that will be copied.
             */
            eProsima_user_DllExport NavSatFix(
                    const NavSatFix& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object sensor_msgs::msg::NavSatFix that will be copied.
             */
            eProsima_user_DllExport NavSatFix(
                    NavSatFix&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object sensor_msgs::msg::NavSatFix that will be copied.
             */
            eProsima_user_DllExport NavSatFix& operator =(
                    const NavSatFix& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object sensor_msgs::msg::NavSatFix that will be copied.
             */
            eProsima_user_DllExport NavSatFix& operator =(
                    NavSatFix&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x sensor_msgs::msg::NavSatFix object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const NavSatFix& x) const;

            /*!
             * @brief Comparison operator.
             * @param x sensor_msgs::msg::NavSatFix object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const NavSatFix& x) const;

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
             * @brief This function copies the value in member status
             * @param _status New value to be copied in member status
             */
            eProsima_user_DllExport void status(
                    const sensor_msgs::msg::NavSatStatus& _status);

            /*!
             * @brief This function moves the value in member status
             * @param _status New value to be moved in member status
             */
            eProsima_user_DllExport void status(
                    sensor_msgs::msg::NavSatStatus&& _status);

            /*!
             * @brief This function returns a constant reference to member status
             * @return Constant reference to member status
             */
            eProsima_user_DllExport const sensor_msgs::msg::NavSatStatus& status() const;

            /*!
             * @brief This function returns a reference to member status
             * @return Reference to member status
             */
            eProsima_user_DllExport sensor_msgs::msg::NavSatStatus& status();
            /*!
             * @brief This function sets a value in member latitude
             * @param _latitude New value for member latitude
             */
            eProsima_user_DllExport void latitude(
                    double _latitude);

            /*!
             * @brief This function returns the value of member latitude
             * @return Value of member latitude
             */
            eProsima_user_DllExport double latitude() const;

            /*!
             * @brief This function returns a reference to member latitude
             * @return Reference to member latitude
             */
            eProsima_user_DllExport double& latitude();

            /*!
             * @brief This function sets a value in member longitude
             * @param _longitude New value for member longitude
             */
            eProsima_user_DllExport void longitude(
                    double _longitude);

            /*!
             * @brief This function returns the value of member longitude
             * @return Value of member longitude
             */
            eProsima_user_DllExport double longitude() const;

            /*!
             * @brief This function returns a reference to member longitude
             * @return Reference to member longitude
             */
            eProsima_user_DllExport double& longitude();

            /*!
             * @brief This function sets a value in member altitude
             * @param _altitude New value for member altitude
             */
            eProsima_user_DllExport void altitude(
                    double _altitude);

            /*!
             * @brief This function returns the value of member altitude
             * @return Value of member altitude
             */
            eProsima_user_DllExport double altitude() const;

            /*!
             * @brief This function returns a reference to member altitude
             * @return Reference to member altitude
             */
            eProsima_user_DllExport double& altitude();

            /*!
             * @brief This function copies the value in member position_covariance
             * @param _position_covariance New value to be copied in member position_covariance
             */
            eProsima_user_DllExport void position_covariance(
                    const sensor_msgs::msg::double__9& _position_covariance);

            /*!
             * @brief This function moves the value in member position_covariance
             * @param _position_covariance New value to be moved in member position_covariance
             */
            eProsima_user_DllExport void position_covariance(
                    sensor_msgs::msg::double__9&& _position_covariance);

            /*!
             * @brief This function returns a constant reference to member position_covariance
             * @return Constant reference to member position_covariance
             */
            eProsima_user_DllExport const sensor_msgs::msg::double__9& position_covariance() const;

            /*!
             * @brief This function returns a reference to member position_covariance
             * @return Reference to member position_covariance
             */
            eProsima_user_DllExport sensor_msgs::msg::double__9& position_covariance();
            /*!
             * @brief This function sets a value in member position_covariance_type
             * @param _position_covariance_type New value for member position_covariance_type
             */
            eProsima_user_DllExport void position_covariance_type(
                    uint8_t _position_covariance_type);

            /*!
             * @brief This function returns the value of member position_covariance_type
             * @return Value of member position_covariance_type
             */
            eProsima_user_DllExport uint8_t position_covariance_type() const;

            /*!
             * @brief This function returns a reference to member position_covariance_type
             * @return Reference to member position_covariance_type
             */
            eProsima_user_DllExport uint8_t& position_covariance_type();


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
                    const sensor_msgs::msg::NavSatFix& data,
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
            sensor_msgs::msg::NavSatStatus m_status;
            double m_latitude;
            double m_longitude;
            double m_altitude;
            sensor_msgs::msg::double__9 m_position_covariance;
            uint8_t m_position_covariance_type;

        };
    } // namespace msg
} // namespace sensor_msgs

#endif // _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_NAVSATFIX_H_

