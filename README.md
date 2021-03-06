# Easy LoRa Node - Low Power (With STM32L072CZT6, LoRa and battery)
Low-Power Easy LoRa Node with STM32L0 and LoRa SX1278
* Hardware is Dragino LSN50 v1.0: https://wiki.dragino.com/index.php?title=Lora_Sensor_Node-LSN50
* Internal LoRaST module: https://wiki.dragino.com/index.php?title=LoRa_ST

STM32DUINO liraries
* Code is written in Arduino style from stm32duino https://github.com/stm32duino/Arduino_Core_STM32
* Other stm32duino libraries: https://www.arduinolibraries.info/authors/stm32duino
* Noted issue with stm32duino and SPI LoRa: https://github.com/stm32duino/Arduino_Core_STM32/issues/279
* **Updated 2020-06-12: Can add STM32 via Board Manager and use B-L072Z-LRWAN1 directly** https://github.com/stm32duino/Arduino_Core_STM32#getting-started
* Release note: https://github.com/stm32duino/Arduino_Core_STM32/releases

Referenced B-L072Z-LRWAN1: It is actually STM32L072CZT6
* I-CUBE-LRWAN: https://www.st.com/en/embedded-software/i-cube-lrwan.html
* Specs: https://www.st.com/resource/en/data_brief/b-l072z-lrwan1.pdf

## 1. Hardware
### 1.1 Pin locations
![EasyLoRaLowPowerNode-Pinout](https://user-images.githubusercontent.com/29994971/63254888-bfccc480-c29e-11e9-83df-536f730e591d.png)

### 1.2 Pin mapping for STM32L072CZT6 (used by LSN50)
Original at https://github.com/dragino/Lora/blob/master/LoRaST/v1.0/LoRa%20ST%20v1.0_Sch.pdf
![stm32L0](https://user-images.githubusercontent.com/29994971/55408675-b3173080-558a-11e9-8747-4baf99477c76.jpg)

## 2. Connect to hardware
### 2.1 Use STLink v2 to upload code
#### STLink v2 USB
Driver is at https://www.st.com/en/development-tools/st-link-v2.html#tools-software
![stlink](https://user-images.githubusercontent.com/29994971/55932515-38b67280-5c54-11e9-85ab-d6fdeee5cf2b.png)

#### Pin mapping
* LSN50 -> STLink v2
* PA14 -> SWCLK
* PA13 -> SWDIO. NOTE: NEXT TO PA13 is PB14. WE NEED PA14!!!
* VCC -> 3.3+
* GND -> GND

![IMG_5387](https://user-images.githubusercontent.com/29994971/61577999-d655f380-ab19-11e9-9e19-86551319ea89.JPG)

Switch of LSN50 is ISP to upload code.
It's recommended to remove UART TTL USB before uploading code via STLink

STLink v2 will show up in USB Device, not Ports (COM & LPT)
![image](https://user-images.githubusercontent.com/29994971/61578026-698f2900-ab1a-11e9-9233-5b52c1c0e661.png)

### 2.2 Use UART to debug
![uart](https://user-images.githubusercontent.com/29994971/55932615-a06cbd80-5c54-11e9-8495-a97811dfcb39.jpg)

* LSN50 -> CP1202 USB TTL
* GND -> GND
* PA2 -> RX
* PA3 -> TX

## 3. Programming guides
### 3.1 Installation of stm32duino to Arduino IDE
Additional Boards Manager URLs: https://github.com/stm32duino/BoardManagerFiles/raw/master/STM32/package_stm_index.json
![lsn50-installation](https://user-images.githubusercontent.com/29994971/55409705-b14e6c80-558c-11e9-827b-2833cfe7e0e3.png)

### 3.2 Add STM32 variant
* **Updated 2020-06-12: Can add STM32 via Board Manager and use B-L072Z-LRWAN1 directly** https://github.com/stm32duino/Arduino_Core_STM32#getting-started

Outdated steps
* Instruction to add variants https://github.com/stm32duino/wiki/wiki/Add-a-new-variant-(board)
* STM32 Source file location: https://github.com/stm32duino/wiki/wiki/Where-are-sources#stm32-core-sources-files-location
* Genpinmap for STM32L072CZT6 (used by LSN50) https://github.com/stm32duino/Arduino_Tools/tree/master/src/genpinmap/Arduino/STM32L072C(B-Z)Tx
* QUICK START - Custom variant for LSN50 by EASY LORA team)
Copy and modify these file in C:\Users\\(USERNAME)\AppData\Local\Arduino15\packages\STM32\hardware\stm32\1.5.0
https://github.com/IoTThinks/EasyLoRaNode_LowPower/tree/master/stm32duino
  
### 3.3 Compilation of Arduino code using Arduino IDE on STM32 board
Port COM4 in the picture is for UART. This is for debugging purpose.
![lsn50-compilation](https://user-images.githubusercontent.com/29994971/55931782-0c4d2700-5c51-11e9-91d2-9d80c77d31a0.png)

The port is blank when we use STLink to upload code and UART USB is not plugged in
![image](https://user-images.githubusercontent.com/29994971/61577990-9727a280-ab19-11e9-8e37-f5a4bba07b25.png)

## 4. Reference
* User manual for v1.0
[LSN50_LoRa_Sensor_Node_UserManual_v1.0.pdf](https://github.com/IoTThinks/EasyLoRaNode_LowPower/files/2973844/LSN50_LoRa_Sensor_Node_UserManual_v1.0.pdf)
* AT Manual for stock firmware [DRAGINO_STM_AT_Commands_v1.3.pdf](https://github.com/IoTThinks/EasyLoRaNode_LowPower/files/2973845/DRAGINO_STM_AT_Commands_v1.3.pdf)
* SHT1x library https://github.com/practicalarduino/SHT1x
* Arduino LoRa STM32 https://github.com/armtronix/arduino-LoRa-STM32
* I2C for STM32 and Arduino https://circuitdigest.com/microcontroller-projects/stm32-stm32f103c8-i2c-communication-tutorial

