# Embedded C Programming 

# Car Seat Heater (Heating control system)
The heat control system is basically used to control the temperature of a car seat. When a user or driver of the car gets seated on a car, the button sensor gets activated. After that, the user gets access to turn on the heater. The temperature sensor keeps monitoring the temperature and sends the analog value to the microcontroller. The microcontroller processes the analog input of the temperature sensor and outputs a temperature value through serial communication. All the activities of the control system are done on a microcontroller called Atmega328.

<img width="636" alt="activity_list" src="https://user-images.githubusercontent.com/65846052/116657001-4f4ed400-a9ab-11eb-8c5b-40e33b87674c.png">

## Problem Statements

* When the two switches are closed, the first LED should glows indicating the actuation of the system and the heater.
* Next the analog input from the temperature sensor to be received and digitized.
* The digitized temperature input has to be visualized Pulse Width Modulation.* 
* The corresponding temperature values based on the digitized temperature input has to be transmitted by the UART protocol and data shoul be displayd on serial monitor

#### CI and Code Quality

|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
|[![Compile-Linux](https://github.com/vinaybc/Emb-C/actions/workflows/compile.yml/badge.svg)](https://github.com/vinaybc/Emb-C/actions/workflows/compile.yml)|[![Cppcheck](https://github.com/Bharathgopal/Emb-C/actions/workflows/CodeQulaity.yml/badge.svg)](https://github.com/Bharathgopal/Emb-C/actions/workflows/CodeQulaity.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/643b7ca2b2dc4daba1e700c216bb87d9)](https://www.codacy.com/gh/Bharathgopal/Emb-C/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Bharathgopal/Emb-C&amp;utm_campaign=Badge_Grade)|

## Wiki Documentation
* System [SETUP](https://github.com/Bharathgopal/Emb-C/wiki)
