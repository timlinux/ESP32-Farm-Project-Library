/*************************************************
 *
 *  ESP32-Farm-Project-Library
 *
 *  License: MIT
 *
 *  Author: Tim Sutton
 *
 *  This library accompanies the ESP32-Farm-Project
 *                        see 
 *  https://github.com/timlinux/ESP32-Farm-Project
 *
 *  IoT project using ESP32, MQTT for managing my 
 *  farm water and other systems.
 *
 * ***********************************************/

#ifndef ESP32_FARM_PROJECT_LIBRARY_H 
#define ESP32_FARM_PROJECT_LIBRARY_H 

// Sensor types

#define SENSOR_STATUS String('A') // for general device status
#define SENSOR_IP String('I') 
#define SENSOR_TEMPERATURE String('T')
#define SENSOR_SOIL_MOISTURE String('M')
#define SENSOR_GATE String('G')
#define SENSOR_CAMERA String('C')
#define SENSOR_HUMIDITY String('H')
#define SENSOR_SOUND String('S')

#define STATUS_OK String('OK')

#define MODE_INSTRUCTION String('I')
#define MODE_RESPONSE String('R')

#define DEVICE_ALL String('A')
#define DEVICE_HUB String('H')
#define DEVICE_PUMPHOUSE String('P')

#define DEVICE_TYPE_HELTEC String('Heltec ESP LoRA WiFi')



#endif  // ESP32_FARM_PROJECT_LIBRARY_H
