# Distance Measurement Embedded System - ATmega32

This project implements a distance measurement system using the HC-SR04 ultrasonic sensor and the ATmega32 microcontroller. The measured distance is displayed on a 4x16 LCD screen.



## Table of Contents

- [Requirements](#requirements)
- [Components](#components)
- [Circuit Diagram](#circuit-diagram)
- [Usage](#usage)

---
## Requirements


### Microcontroller and Sensor

1. Use the ATmega32 Microcontroller operating at a frequency of 8MHz.
2. Measure distance using the HC-SR04 Ultrasonic sensor.

### LCD Display

- Display the measured distance on a 4x16 LCD.
- Connect LCD control and data pins as specified in the documentation.

### Layered Architecture

The project follows a layered architecture model, incorporating the following components:

- GPIO Driver
- ICU Driver
- LCD Driver (8-bits data mode)
- Ultrasonic Driver (using ATmega32 ICU driver)

![image](https://github.com/Hesham-Hesham/Distance-Measurement-Embedded-System-ATmega32/assets/91581641/52bd37a9-c83f-4f2a-835e-6d8bf2e1b2a1)



For the full detailed drivers' requirements check [The Project requirements file](https://github.com/Hesham-Hesham/Distance-Measurement-Embedded-System-ATmega32/blob/main/System%20Requirements.pdf)

---

## Components

1. **ATmega32 Microcontroller:** The main processing unit operating at 8MHz.

2. **HC-SR04 Ultrasonic Sensor:** To measure distance.

3. **4x16 LCD Display:** To show the measured distance.

4. **Oscilloscope:** To graphically display the varying echo value




---

## Circuit Diagram

![image](https://github.com/Hesham-Hesham/Distance-Measurement-Embedded-System-ATmega32/assets/91581641/c56ecfa1-2f8d-4187-9cc5-907688871043)


---

## Usage
- ### Hardware target
    In order to run the code on a real hardware target (ARmega32), follow these steps:
1. **Setup**: Connect the components as per the circuit diagram.
2. **Compile**: Use an appropriate compiler (e.g., AVR GCC) to compile the provided source code.
3. **Program**: Program the ATmega32 Microcontroller with the compiled binary using a suitable programmer (e.g., AVR ISP).
4. **Run**: Power up the circuit. The Stopwatch will start counting immediately.
5. **User Interaction**: Use the push buttons as follows:
   - The speed of the fan is controlled by the temperature the sensor reads.



- ### Simulation
1.  **Setup**: Install proteus 8 professional v10.0 or higher
2. **Install Add-ons**: Add the necessary arduino and avr add-ons (Arduino_Proteus_Libraries)
3. **Run**: Run the .pdsprj file in the /Proteus Simulation folder in any of the versions 

<br/><br/>

---

This project was made during the Full Embedded Systems Diploma under the supervision of Engineer Mohamed Tarek.

---

*Note: This README provides an overview of the project and its requirements. For detailed implementation and code, please refer to the source files provided in this repository.*



