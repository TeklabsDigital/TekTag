# **TekTag: The Future of Telehealth**

![TekTag Front](https://github.com/TeklabsDigital/TekTag/blob/main/images/tektag-front.png)

**TekTag** is a cutting-edge biosensor for telehealth, patient monitoring, fall detection, dementia geofencing and cardiograms. This repository houses all the necessary files and resources to understand, modify, and contribute to this innovative project.

## **Features**

Our biosensor provides a plethora of features designed to enhance the quality of life for individuals and improve the capabilities of healthcare providers. It includes:

- Telehealth capabilities
- Patient monitoring
- Fall detection
- Dementia geofencing
- Cardiograms

![Hospital Biosensor](https://github.com/TeklabsDigital/TekTag/blob/main/images/hospital-biosensor.jpg)

The small size, wireless Bluetooth, hermetically sealed enclosure, and Qi charging features of the sensor make it versatile enough to be used in a wide variety of applications, such as:

- Sports Performance Analysis
- Physical Therapy
- Elderly Care
- Virtual Reality (VR)/ Augmented Reality (AR) Systems
- Gaming
- Industrial Monitoring
- Sleep Studies
- Dance Choreography
- Wildlife Studies
- Security Systems
- Drone Navigation

## BLE Support and Mesh Technology

One of the key features of the TekTag is its compatibility with the STM32WB ecosystem, which offers support for a variety of Bluetooth Low Energy (BLE) protocols. BLE is a power-efficient version of classic Bluetooth and is designed for short-range communication between devices. 

A particularly exciting protocol within this ecosystem is BLE Mesh technology. BLE Mesh allows for many-to-many communication, creating a network of interconnected devices that can communicate with each other. This is an essential feature when deploying large numbers of TekTag devices in a hospital setting.

### Benefits of BLE Mesh Technology

There are several key benefits of using BLE Mesh technology in a TekTag deployment:

1. **Scalability**: BLE Mesh networks can theoretically support up to 32,767 devices, making them highly scalable. This is ideal for large-scale deployments in hospitals, where you might need to monitor many patients simultaneously.

2. **Reliability**: In a mesh network, data can take multiple paths to reach its destination, which increases the network's overall reliability. If one device fails or is disconnected, the network can automatically reconfigure itself to ensure data still reaches its destination.

3. **Range**: While individual BLE devices have a limited range, a mesh network can extend that range significantly. Each device in the network can act as a relay, passing messages from one device to another. This allows data to travel large distances across the network, making it possible to cover an entire hospital.

4. **Power Efficiency**: Despite their capabilities, BLE Mesh networks are highly power efficient. This is crucial for TekTag devices, which need to operate for extended periods without recharging.

By leveraging the BLE protocols and mesh technology available in the STM32WB ecosystem, TekTag devices can provide a scalable, reliable, and power-efficient solution for patient monitoring in hospitals. This technology is central to our mission of improving patient outcomes and transforming healthcare delivery.


## **Hardware/Electronics**

Our biosensor utilizes a range of high-performance components to achieve its functionality:

- **STM32WB55VG:** This is a BLE 5.3 dual-core, multi-protocol and ultra-low-power 2.4 GHz MCU system on chip. Supporting mesh networking, the STM32WB is the brain of our sensor and responsible for data processing and wireless communication.

- **MLPF-WB55-01E3:** This is an integrated filter module for STM32WB55. It enhances the wireless reliability and performance of our sensor.

- **BQ51052BYFP:** This is a high-efficiency, Qi-compliant wireless power receiver. It enables our sensor to be charged wirelessly.

- **TLV75533PDRV:** This is a low-dropout (LDO) regulator with high power-supply rejection ratio (PSRR). It helps to provide stable power supply for our sensor.

- **KTD2052:** This is an LED driver used for status indication in our sensor.

- **LSM6DSV16XTR:** This is a system-in-package featuring a 3D digital accelerometer and a 3D digital gyroscope. It enables our sensor to detect and log movements.

## **Repository Structure**

This repository is organized into several key sections:

- **Electronics:** Schematics, PCB updates and files related to the electronic components of the TekTag biosensor.
- **Firmware/stm32:** The initial commit of the firmware for the STM32 microcontroller used in the device.
- **Mechanical:** Files related to the mechanical aspects of the biosensor, including design and assembly instructions.

## **Images**

Below are some images related to the project:

![TekTag Profile](https://github.com/TeklabsDigital/TekTag/blob/main/images/tektag-profile.png)
![TekTag Profile Holder](https://github.com/TeklabsDigital/TekTag/blob/main/images/tektag-profile-holder.png)
![TekTag Profile 2](https://github.com/TeklabsDigital/TekTag/blob/main/images/tektag-profile2.png)

## **Contribute**

We welcome contributions to the Tek
