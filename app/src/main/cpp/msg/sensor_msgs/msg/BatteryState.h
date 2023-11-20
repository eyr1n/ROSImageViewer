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
 * @file BatteryState.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_BATTERYSTATE_H_
#define _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_BATTERYSTATE_H_

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
#if defined(BATTERYSTATE_SOURCE)
#define BATTERYSTATE_DllAPI __declspec( dllexport )
#else
#define BATTERYSTATE_DllAPI __declspec( dllimport )
#endif // BATTERYSTATE_SOURCE
#else
#define BATTERYSTATE_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define BATTERYSTATE_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace sensor_msgs {
    namespace msg {
        namespace BatteryState_Constants {
            const uint8_t POWER_SUPPLY_STATUS_UNKNOWN = 0;
            const uint8_t POWER_SUPPLY_STATUS_CHARGING = 1;
            const uint8_t POWER_SUPPLY_STATUS_DISCHARGING = 2;
            const uint8_t POWER_SUPPLY_STATUS_NOT_CHARGING = 3;
            const uint8_t POWER_SUPPLY_STATUS_FULL = 4;
            const uint8_t POWER_SUPPLY_HEALTH_UNKNOWN = 0;
            const uint8_t POWER_SUPPLY_HEALTH_GOOD = 1;
            const uint8_t POWER_SUPPLY_HEALTH_OVERHEAT = 2;
            const uint8_t POWER_SUPPLY_HEALTH_DEAD = 3;
            const uint8_t POWER_SUPPLY_HEALTH_OVERVOLTAGE = 4;
            const uint8_t POWER_SUPPLY_HEALTH_UNSPEC_FAILURE = 5;
            const uint8_t POWER_SUPPLY_HEALTH_COLD = 6;
            const uint8_t POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE = 7;
            const uint8_t POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE = 8;
            const uint8_t POWER_SUPPLY_TECHNOLOGY_UNKNOWN = 0;
            const uint8_t POWER_SUPPLY_TECHNOLOGY_NIMH = 1;
            const uint8_t POWER_SUPPLY_TECHNOLOGY_LION = 2;
            const uint8_t POWER_SUPPLY_TECHNOLOGY_LIPO = 3;
            const uint8_t POWER_SUPPLY_TECHNOLOGY_LIFE = 4;
            const uint8_t POWER_SUPPLY_TECHNOLOGY_NICD = 5;
            const uint8_t POWER_SUPPLY_TECHNOLOGY_LIMN = 6;
        } // namespace BatteryState_Constants
        /*!
         * @brief This class represents the structure BatteryState defined by the user in the IDL file.
         * @ingroup BatteryState
         */
        class BatteryState
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport BatteryState();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~BatteryState();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object sensor_msgs::msg::BatteryState that will be copied.
             */
            eProsima_user_DllExport BatteryState(
                    const BatteryState& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object sensor_msgs::msg::BatteryState that will be copied.
             */
            eProsima_user_DllExport BatteryState(
                    BatteryState&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object sensor_msgs::msg::BatteryState that will be copied.
             */
            eProsima_user_DllExport BatteryState& operator =(
                    const BatteryState& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object sensor_msgs::msg::BatteryState that will be copied.
             */
            eProsima_user_DllExport BatteryState& operator =(
                    BatteryState&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x sensor_msgs::msg::BatteryState object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const BatteryState& x) const;

            /*!
             * @brief Comparison operator.
             * @param x sensor_msgs::msg::BatteryState object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const BatteryState& x) const;

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
             * @brief This function sets a value in member voltage
             * @param _voltage New value for member voltage
             */
            eProsima_user_DllExport void voltage(
                    float _voltage);

            /*!
             * @brief This function returns the value of member voltage
             * @return Value of member voltage
             */
            eProsima_user_DllExport float voltage() const;

            /*!
             * @brief This function returns a reference to member voltage
             * @return Reference to member voltage
             */
            eProsima_user_DllExport float& voltage();

            /*!
             * @brief This function sets a value in member temperature
             * @param _temperature New value for member temperature
             */
            eProsima_user_DllExport void temperature(
                    float _temperature);

            /*!
             * @brief This function returns the value of member temperature
             * @return Value of member temperature
             */
            eProsima_user_DllExport float temperature() const;

            /*!
             * @brief This function returns a reference to member temperature
             * @return Reference to member temperature
             */
            eProsima_user_DllExport float& temperature();

            /*!
             * @brief This function sets a value in member current
             * @param _current New value for member current
             */
            eProsima_user_DllExport void current(
                    float _current);

            /*!
             * @brief This function returns the value of member current
             * @return Value of member current
             */
            eProsima_user_DllExport float current() const;

            /*!
             * @brief This function returns a reference to member current
             * @return Reference to member current
             */
            eProsima_user_DllExport float& current();

            /*!
             * @brief This function sets a value in member charge
             * @param _charge New value for member charge
             */
            eProsima_user_DllExport void charge(
                    float _charge);

            /*!
             * @brief This function returns the value of member charge
             * @return Value of member charge
             */
            eProsima_user_DllExport float charge() const;

            /*!
             * @brief This function returns a reference to member charge
             * @return Reference to member charge
             */
            eProsima_user_DllExport float& charge();

            /*!
             * @brief This function sets a value in member capacity
             * @param _capacity New value for member capacity
             */
            eProsima_user_DllExport void capacity(
                    float _capacity);

            /*!
             * @brief This function returns the value of member capacity
             * @return Value of member capacity
             */
            eProsima_user_DllExport float capacity() const;

            /*!
             * @brief This function returns a reference to member capacity
             * @return Reference to member capacity
             */
            eProsima_user_DllExport float& capacity();

            /*!
             * @brief This function sets a value in member design_capacity
             * @param _design_capacity New value for member design_capacity
             */
            eProsima_user_DllExport void design_capacity(
                    float _design_capacity);

            /*!
             * @brief This function returns the value of member design_capacity
             * @return Value of member design_capacity
             */
            eProsima_user_DllExport float design_capacity() const;

            /*!
             * @brief This function returns a reference to member design_capacity
             * @return Reference to member design_capacity
             */
            eProsima_user_DllExport float& design_capacity();

            /*!
             * @brief This function sets a value in member percentage
             * @param _percentage New value for member percentage
             */
            eProsima_user_DllExport void percentage(
                    float _percentage);

            /*!
             * @brief This function returns the value of member percentage
             * @return Value of member percentage
             */
            eProsima_user_DllExport float percentage() const;

            /*!
             * @brief This function returns a reference to member percentage
             * @return Reference to member percentage
             */
            eProsima_user_DllExport float& percentage();

            /*!
             * @brief This function sets a value in member power_supply_status
             * @param _power_supply_status New value for member power_supply_status
             */
            eProsima_user_DllExport void power_supply_status(
                    uint8_t _power_supply_status);

            /*!
             * @brief This function returns the value of member power_supply_status
             * @return Value of member power_supply_status
             */
            eProsima_user_DllExport uint8_t power_supply_status() const;

            /*!
             * @brief This function returns a reference to member power_supply_status
             * @return Reference to member power_supply_status
             */
            eProsima_user_DllExport uint8_t& power_supply_status();

            /*!
             * @brief This function sets a value in member power_supply_health
             * @param _power_supply_health New value for member power_supply_health
             */
            eProsima_user_DllExport void power_supply_health(
                    uint8_t _power_supply_health);

            /*!
             * @brief This function returns the value of member power_supply_health
             * @return Value of member power_supply_health
             */
            eProsima_user_DllExport uint8_t power_supply_health() const;

            /*!
             * @brief This function returns a reference to member power_supply_health
             * @return Reference to member power_supply_health
             */
            eProsima_user_DllExport uint8_t& power_supply_health();

            /*!
             * @brief This function sets a value in member power_supply_technology
             * @param _power_supply_technology New value for member power_supply_technology
             */
            eProsima_user_DllExport void power_supply_technology(
                    uint8_t _power_supply_technology);

            /*!
             * @brief This function returns the value of member power_supply_technology
             * @return Value of member power_supply_technology
             */
            eProsima_user_DllExport uint8_t power_supply_technology() const;

            /*!
             * @brief This function returns a reference to member power_supply_technology
             * @return Reference to member power_supply_technology
             */
            eProsima_user_DllExport uint8_t& power_supply_technology();

            /*!
             * @brief This function sets a value in member present
             * @param _present New value for member present
             */
            eProsima_user_DllExport void present(
                    bool _present);

            /*!
             * @brief This function returns the value of member present
             * @return Value of member present
             */
            eProsima_user_DllExport bool present() const;

            /*!
             * @brief This function returns a reference to member present
             * @return Reference to member present
             */
            eProsima_user_DllExport bool& present();

            /*!
             * @brief This function copies the value in member cell_voltage
             * @param _cell_voltage New value to be copied in member cell_voltage
             */
            eProsima_user_DllExport void cell_voltage(
                    const std::vector<float>& _cell_voltage);

            /*!
             * @brief This function moves the value in member cell_voltage
             * @param _cell_voltage New value to be moved in member cell_voltage
             */
            eProsima_user_DllExport void cell_voltage(
                    std::vector<float>&& _cell_voltage);

            /*!
             * @brief This function returns a constant reference to member cell_voltage
             * @return Constant reference to member cell_voltage
             */
            eProsima_user_DllExport const std::vector<float>& cell_voltage() const;

            /*!
             * @brief This function returns a reference to member cell_voltage
             * @return Reference to member cell_voltage
             */
            eProsima_user_DllExport std::vector<float>& cell_voltage();
            /*!
             * @brief This function copies the value in member cell_temperature
             * @param _cell_temperature New value to be copied in member cell_temperature
             */
            eProsima_user_DllExport void cell_temperature(
                    const std::vector<float>& _cell_temperature);

            /*!
             * @brief This function moves the value in member cell_temperature
             * @param _cell_temperature New value to be moved in member cell_temperature
             */
            eProsima_user_DllExport void cell_temperature(
                    std::vector<float>&& _cell_temperature);

            /*!
             * @brief This function returns a constant reference to member cell_temperature
             * @return Constant reference to member cell_temperature
             */
            eProsima_user_DllExport const std::vector<float>& cell_temperature() const;

            /*!
             * @brief This function returns a reference to member cell_temperature
             * @return Reference to member cell_temperature
             */
            eProsima_user_DllExport std::vector<float>& cell_temperature();
            /*!
             * @brief This function copies the value in member location
             * @param _location New value to be copied in member location
             */
            eProsima_user_DllExport void location(
                    const std::string& _location);

            /*!
             * @brief This function moves the value in member location
             * @param _location New value to be moved in member location
             */
            eProsima_user_DllExport void location(
                    std::string&& _location);

            /*!
             * @brief This function returns a constant reference to member location
             * @return Constant reference to member location
             */
            eProsima_user_DllExport const std::string& location() const;

            /*!
             * @brief This function returns a reference to member location
             * @return Reference to member location
             */
            eProsima_user_DllExport std::string& location();
            /*!
             * @brief This function copies the value in member serial_number
             * @param _serial_number New value to be copied in member serial_number
             */
            eProsima_user_DllExport void serial_number(
                    const std::string& _serial_number);

            /*!
             * @brief This function moves the value in member serial_number
             * @param _serial_number New value to be moved in member serial_number
             */
            eProsima_user_DllExport void serial_number(
                    std::string&& _serial_number);

            /*!
             * @brief This function returns a constant reference to member serial_number
             * @return Constant reference to member serial_number
             */
            eProsima_user_DllExport const std::string& serial_number() const;

            /*!
             * @brief This function returns a reference to member serial_number
             * @return Reference to member serial_number
             */
            eProsima_user_DllExport std::string& serial_number();

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
                    const sensor_msgs::msg::BatteryState& data,
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
            float m_voltage;
            float m_temperature;
            float m_current;
            float m_charge;
            float m_capacity;
            float m_design_capacity;
            float m_percentage;
            uint8_t m_power_supply_status;
            uint8_t m_power_supply_health;
            uint8_t m_power_supply_technology;
            bool m_present;
            std::vector<float> m_cell_voltage;
            std::vector<float> m_cell_temperature;
            std::string m_location;
            std::string m_serial_number;

        };
    } // namespace msg
} // namespace sensor_msgs

#endif // _FAST_DDS_GENERATED_SENSOR_MSGS_MSG_BATTERYSTATE_H_

