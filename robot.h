/*******************************************************************
  Connect to local MQTT server with a Bot

  Created with code from noycebru www.twitch.tv/noycebru
 *******************************************************************/

#ifndef RAID_LIGHTS_H
#define RAID_LIGHTS_H

// Configure your default pin numbers
const int RAID_LIGHTS_1_2_PIN = 5;
const int RAID_LIGHTS_3_4_PIN = 12;

// The amount of time to activate the robot
const int ACTIVATE_TIME_DEFAULT = 10000; // time in ms

//------- Update the following! ------
const String MQTT_ID = "raid-lights-001"; // ID for this client when connecting to MQTT
const String MQTT_BROKER = "192.168.1.22"; // Hostname or IP of your MQTT server
const int MQTT_PORT = 1883; // Set the port used by your MQTT server
const int MQTT_RECONNECT_DELAY = 3000; // Time in ms to wait between reconnect attempts
const int MQTT_TOPIC_COUNT = 1; // This should match the number of topics you wish to subscribe to
const String MQTT_TOPIC[MQTT_TOPIC_COUNT] = {"raid-lights"}; // The topic name you wish to listen for

#endif