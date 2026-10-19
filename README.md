# Smart Room Monitor

### CSE 321 - Real Time and Embedded Operating Systems

This project focuses on developing a Smart Room Monitor using an STM32 NUCLEO-F072RB microcontroller and FreeRTOS.

The system will monitor a room's temperature, humidity, light level, and air quality in real time. It will display live sensor readings on an OLED, provide alerts when readings exceed certain limits, and automatically turn on a fan when temperature or air quality becomes too high.

A PIR motion sensor will also detect whether someone is in the room and allow the system to enter Sleep mode after a period of inactivity.

## Hardware
- STM32 NUCLEO-F072RB Microcontroller
- BME280 Temperature/Humidity Sensor
- BH1750 Light Intensity Sensor
- MQ-135 Air Quality Sensor
- PIR Motion Sensor
- GME12864 OLED Display
- RGB LED and Piezo Buzzer
- 12V DC Fan and MOSFET
- Push Buttons
- Buck Converter
- 12V, 2A DC Wall Adapter

## Software
- Embedded C
- STM32CubeIDE
- FreeRTOS

## RTOS Components

The system will use FreeRTOS to organize and schedule different tasks.

- **Sensor Tasks:** Collect temperature, humidity, light, and air quality readings at timed intervals.
- **Monitoring Task:** Check sensor readings to confirm if room conditions are within the set limits.
- **Alert Task:** Activate the RGB LED and buzzer when sensor readings reach certain limits.
- **Fan Control:** Automatically turn on the fan when temperature becomes too high or air quality becomes too poor.
- **Display Task:** Show sensor readings on the OLED and allow users to switch between screens using a push button.
- **Motion Detection:** Detect movement using the PIR sensor and enter Sleep mode after a certain amount of inactivity.

We also plan on using queues to share sensor readings between tasks, a mutex to manage the I2C bus, and semaphores for button presses and motion detection.


## Project Status
Currently in development.
