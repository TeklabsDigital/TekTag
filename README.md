# **TekTag: The Future of Telehealth**

**TekTag** is a cutting-edge biosensor for telehealth, patient monitoring, fall detection, dementia geofencing, and cardiograms. This repository houses all the necessary files and resources to understand, modify, and contribute to this innovative project.

![TekTag Front](https://github.com/TeklabsDigital/TekTag/blob/main/images/tektag-front.png)

## **Table of Contents**

- [Features](#features)
- [Applications](#applications)
- [BLE Support and Mesh Technology](#ble-support-and-mesh-technology)
  - [Benefits of BLE Mesh Technology](#benefits-of-ble-mesh-technology)
- [Hardware/Electronics](#hardwareelectronics)
- [Repository Structure](#repository-structure)
- [Images](#images)
- [PCB Size and Assembly](#pcb-size-and-assembly)
- [Why is this project Open Source?](#why-is-this-project-open-source)
- [Supporting This Project](#supporting-this-project)
- [Licenses](#licenses)
- [Contact Us](#contact-us)

## [Features](#features)

Our biosensor provides a plethora of features designed to enhance the quality of life for individuals and improve the capabilities of healthcare providers. It includes:

- Telehealth capabilities
- Patient monitoring
- Pressure area management - bed turn and movement detection
- Cardiac monitoring via Ballistocardiology (BCG)
- Patient Fall detection
- Dementia geo-fence alerting
- Respiratory monitoring
- Sleep pattern monitoring

![Hospital Biosensor](https://github.com/TeklabsDigital/TekTag/blob/main/images/hospital-biosensor.jpg)

## [Applications](#applications)

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

## [BLE Support and Mesh Technology](#ble-support-and-mesh-technology)

One of the key features of the TekTag is its compatibility with the STM32WB ecosystem, which offers support for a variety of Bluetooth Low Energy (BLE) protocols. BLE is a power-efficient version of classic Bluetooth and is designed for short-range communication between devices. 

A particularly exciting protocol within this ecosystem is BLE Mesh technology. BLE Mesh allows for many-to-many communication, creating a network of interconnected devices that can communicate with each other. This is an essential feature when deploying large numbers of TekTag devices in a hospital setting.

### [Benefits of BLE Mesh Technology](#benefits-of-ble-mesh-technology)

There are several key benefits of using BLE Mesh technology in a TekTag deployment:

1. **Scalability**: BLE Mesh networks can theoretically support up to 32,767 devices, making them highly scalable. This is ideal for large-scale deployments in hospitals, where you might need to monitor many patients simultaneously.
2. **Reliability**: In a mesh network, data can take multiple paths to reach its destination, which increases the network's overall reliability. If one device fails or is disconnected, the network can automatically reconfigure itself to ensure data still reaches its destination.
3. **Range**: While individual BLE devices have a limited range, a mesh network can extend that range significantly. Each device in the network can act as a relay, passing messages from one device to another. This allows data to travel large distances across the network, making it possible to cover an entire hospital.
4. **Power Efficiency**: Despite their capabilities, BLE Mesh networks are highly power efficient. This is crucial for TekTag devices, which need to operate for extended periods without recharging.


## [Hardware/Electronics](#hardwareelectronics)

Our biosensor utilizes a range of high-performance components to achieve its functionality:

- **STM32WB55VG:** This is a BLE 5.3 dual-core, multi-protocol and ultra-low-power 2.4 GHz MCU system on chip. Supporting mesh networking, the STM32WB is the brain of our sensor and responsible for data processing and wireless communication.

- **MLPF-WB55-01E3:** This is an integrated filter module for STM32WB55, by ST. It increases board space through reduced PCB component count.

- **BQ51052BYFP:** This is a high-efficiency, Qi-compliant wireless power receiver. It enables our sensor to be charged wirelessly.

- **TLV75533PDRV:** This is a low-dropout (LDO) regulator with high power-supply rejection ratio (PSRR). It helps to provide stable power supply for our sensor.

- **KTD2052:** This is an LED driver used for status indication in our sensor.

- **LSM6DSV16XTR:** This is a system-in-package featuring a 3D digital accelerometer and a 3D digital gyroscope. It enables our sensor to detect and log movements.

## [Repository Structure](#repository-structure)

This repository is organized into several key sections:

- **Electronics:** Schematics, PCB updates and files related to the electronic components of the TekTag biosensor.
- **Firmware/stm32:** The initial commit of the firmware for the STM32 microcontroller used in the device.
- **Mechanical:** Files related to the mechanical aspects of the biosensor, including design and assembly instructions.

## [Images](#images)

Below are some images related to the project:

## [Images](#images)

Below are some images related to the project:

### PCB Front - 6 Layers
Having a six-layer PCB with tented vias under a BGA (Ball Grid Array) is important for our product's compact size, signal integrity, thermal management, and reliability. The extra layers allow for denser routing, reducing PCB size. Tented vias prevent solder draw into vias, preventing assembly problems under tight constraints.

<img src="https://github.com/TeklabsDigital/TekTag/blob/main/images/pcb-front.png" alt="PCB Front" width="600">

### PCB Front 3D

<img src="https://github.com/TeklabsDigital/TekTag/blob/main/images/pcb-front-3d.png" alt="PCB Front 3D" width="600">

### PCB Back 3D

<img src="https://github.com/TeklabsDigital/TekTag/blob/main/images/pcb-back-3d.png" alt="PCB Back 3D" width="600">

### TekTag Biosensor with Silicon Holder

<img src="https://github.com/TeklabsDigital/TekTag/blob/main/images/tektag-profile.png" alt="TekTag Profile" width="600">

<img src="https://github.com/TeklabsDigital/TekTag/blob/main/images/tektag-profile-holder.png" alt="TekTag Profile Holder" width="600">

### TekTag Biosensor on Patient

<img src="https://github.com/TeklabsDigital/TekTag/blob/main/images/tektag-profile2.png" alt="TekTag Profile 2" width="600">


## [PCB Size and Assembly](#pcb-size-and-assembly)

The TekTag biosensor is designed with a compact and highly-integrated PCB (Printed Circuit Board). Given its small size, specialized tools and expertise are required for the assembly process. This could pose a challenge for individual builders, especially those without access to such resources.

Understanding this, if there is enough interest from the community, we are prepared to step in and help. We plan to manufacture and assemble the boards for everyone at minimal cost. This not only ensures the quality and consistency of the boards but also makes the TekTag biosensor more accessible to everyone interested in using or contributing to it.

## [Why is this project Open Source?](#why-is-this-project-open-source)

TekTag is a project rooted in the belief that quality healthcare should be accessible to everyone, regardless of where they are in the world. By open sourcing this project, we are aiming to democratize access to technology that has the potential to significantly improve patient outcomes, particularly in developing countries where resources may be limited. 

There are several reasons why we believe an open source approach is best for this project:

1. **Community Collaboration**: Open source projects foster a unique sense of collaboration and community. People from all around the world can contribute to the project, each bringing their unique perspectives and skills to the table. This diversity can drive innovation and improve the product in ways that wouldn't be possible in a closed source project.

2. **Accelerated Development**: With more eyes on the project, issues can be identified and resolved more quickly. This can speed up the development process and result in a better final product.

3. **Transparency**: Open source projects are transparent. Anyone can look at the code and understand exactly how the product works. This transparency can build trust and make it easier for people to adopt the technology.

4. **Accessibility**: Perhaps the most important reason is that open source projects are accessible to everyone. Anyone, anywhere, can use and modify the product for their own needs. This is particularly important for healthcare technology, which has the potential to save lives and improve quality of life for millions of people.

5. **Non-profit Motivation**: As a non-profit initiative, our primary goal is to support health outcomes worldwide. Our focus is on creating a product that can have a real impact on the world, not on generating profit.

6. **Education**: Open sourcing this project also provides a valuable learning resource for students and professionals interested in biosensor technology. They can learn from and build upon the work that's already been done, accelerating their own learning and development.

By open sourcing TekTag, we hope to create a product that's not only effective, but also widely accessible and continually improving. This is our contribution to supporting healthcare in both developing countries and in first world hospitals where critical care is needed. We invite you to join us in this endeavor, whether it's by using TekTag, contributing to its development, or simply learning from the project.

## [Supporting This Project](#supporting-this-project)

TekTag is a community-driven project, and we welcome contributions from everyone, regardless of their background or experience level. There are several ways you can support this project:

1. **Contributing Code**: If you have experience in UX/UI for the web application, Node.js for backend development, Express.js for the frontend, or STM32WB firmware engineering, your skills are particularly valuable. You can contribute directly to the codebase, helping us improve and expand the functionality of TekTag.

2. **Testing and Reporting Issues**: Even if you're not a developer, you can still contribute by testing the TekTag and reporting any issues or bugs you find. This helps us ensure that the TekTag is as reliable and effective as possible.

3. **Spreading the Word**: Help us grow the TekTag community by sharing the project with others. The more people who know about TekTag, the more we can achieve.

4. **Donations**: As a not-for-profit project, we rely on donations to fund our work. If you're able to, consider making a donation to support the development of TekTag.

5. **Partnerships**: We are open to partnerships with organizations that align with our mission of improving healthcare outcomes worldwide. If you represent such an organization, please get in touch.

## [Licenses](#licenses)
Project source code, hardware designs and 3d enclosure designs are open source and licensed under the terms of the attached license, with attribution to TekLabs Digital Pty Ltd, Australia

## [Contact Us](#contact-us)
If you're interested in contributing to the TekTag project, please contact us through our website at [https://teklabsdigital.com/contact/](https://teklabsdigital.com/contact/). We look forward to working with you to make TekTag the best it can be!

Remember, every contribution, no matter how small, helps us move closer to our goal of improving healthcare outcomes around the world. Thank you for your support!
