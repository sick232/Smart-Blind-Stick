Smart Stick – Obstacle and Pothole Detection
Overview

The Smart Stick is an Arduino-based assistive device designed to help visually impaired users navigate safely by detecting obstacles and potholes. It integrates an IR sensor for nearby obstacles and an ultrasonic sensor for dips or potholes. Alerts are provided through a vibration motor and buzzers, offering tactile and audio feedback to ensure safe movement.

Sensor readings are also displayed on the serial monitor for monitoring and calibration. Lightweight and portable, this device is suitable for both indoor and outdoor use, enhancing mobility, safety, and independence.

Features

IR Sensor: Detects immediate obstacles like walls or furniture.

Ultrasonic Sensor: Detects potholes or uneven surfaces.

Buzzer & Vibration Motor: Provides audible and tactile alerts.

Real-Time Monitoring: Serial monitor shows IR state and distance values.

Components Used
Component	Pin Used	Purpose
Arduino UNO	N/A	Microcontroller
IR Sensor	2	Obstacle detection
Ultrasonic Sensor	Trig: 9, Echo: 10	Pothole detection
Buzzer (IR Alert)	7	Alerts obstacles
Buzzer (Ultra Alert)	4	Alerts potholes
Vibration Motor	5	Tactile feedback
Circuit Diagram
Arduino UNO
+-----------+
|           |
|  IR Pin 2 |---- IR Sensor
| Trig 9    |---- Ultrasonic Trig
| Echo 10   |<--- Ultrasonic Echo
| Buzzer7   |---- IR Buzzer
| Buzzer4   |---- Ultrasonic Buzzer
| Vib 5     |---- Vibration Motor
+-----------+




How to Use

Connect components according to the pin configuration.

Open SmartStick.ino in Arduino IDE.

Connect Arduino UNO and upload the sketch.

Power the Arduino via USB or battery.

Walk slowly while holding the stick. The IR sensor alerts obstacles, and the ultrasonic sensor alerts potholes.

Adjust sensor range and buzzer patterns if needed.
