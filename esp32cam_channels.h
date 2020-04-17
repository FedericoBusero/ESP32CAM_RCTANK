#ifndef _ESP32CAM_CHANNEL_
#define _ESP32CAM_CHANNEL_

// LEDC_TIMER_0 (channels 0, 1, 8, 9) is used by the camera @ 2 MHz

// LEDC_TIMER_1 (channels 2, 3, 10, 11) @ 2000 Hz (motors)
const int MotChannel0 = 2; // 2000 Hz
const int MotChannel1 = 3; // 2000 Hz
const int MotChannel2 = 10; // 2000 Hz
const int MotChannel3 = 11; // 2000 Hz

// LEDC_TIMER_2 (channels 4, 5, 12, 13) @ 5000 Hz (led)
const int LEDChannel = 4;

// LEDC_TIMER_3 (channels 6, 7, 14, 15) @ 50 Hz (servo)
const int ServoChannel = 6;

#endif
