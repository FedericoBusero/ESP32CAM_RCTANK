#ifndef _ESP32CAM_CHANNEL_
#define _ESP32CAM_CHANNEL_

// LEDC_TIMER_0 is used by the camera @ 2 MHz
// LEDC_CHANNEL_0

const int MotChannel0 = 3; // 2000 Hz
const int MotChannel1 = 4; // 2000 Hz
const int MotChannel2 = 5; // 2000 Hz
const int MotChannel3 = 6; // 2000 Hz

const int LEDChannel = 7; // 5000 Hz

const int ServoChannel = 8; // 50 Hz
 
#endif
