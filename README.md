# Easy LoRa Node - Low Power (With battery)
Low-Power Easy LoRa Node with STM32L0 and LoRa SX1278
* Hardware is Dragino LSN50 v1.0: https://wiki.dragino.com/index.php?title=Lora_Sensor_Node-LSN50
* Internal LoRaST module: https://wiki.dragino.com/index.php?title=LoRa_ST

Code is written in Arduino style from stm32duino https://github.com/stm32duino/Arduino_Core_STM32
* STM32 Source file location: https://github.com/stm32duino/wiki/wiki/Where-are-sources#stm32-core-sources-files-location
* To add variants https://github.com/stm32duino/wiki/wiki/Add-a-new-variant-(board)
* Genpinmap https://github.com/stm32duino/Arduino_Tools/tree/master/src/genpinmap/Arduino/STM32L072C(B-Z)Tx

## 1. Hardware
### 1.1 Pin locations
![lsn50 pintout - with detail](https://user-images.githubusercontent.com/29994971/55710783-91e49300-5a15-11e9-8d2c-01034367a500.png)

### 1.2 Pin mapping for STM32L072CZT6 (used by LSN50)
Original at https://github.com/dragino/Lora/blob/master/LoRaST/v1.0/LoRa%20ST%20v1.0_Sch.pdf
![stm32L0](https://user-images.githubusercontent.com/29994971/55408675-b3173080-558a-11e9-8747-4baf99477c76.jpg)

## 2. Connect to hardware
### 2.1 Use STLink v2 to upload code
* LSN50 -> STLink v2
* PA14 -> SWCLK
* PA13 -> SWDIO
* VCC -> 3.3+
* GND -> GND

Switch of LSN50 is ISP to upload code.

### 2.2 Use UART to debug
* LSN50 -> CP1202 USB TTL
* GND -> GND
* PA2 -> RX
* PA3 -> TX

## 3. Programming guides
### 3.1 Pin translation of LSN50 STM32 to Arduino style
* #define PA0   1
* #define PA1	  2
* #define PA2	  3
* #define PA3	  4
* #define PB6	  5
* #define PB7	  6
* #define PB3	  7
* #define PB4	  8
* #define PA9	  9
* #define PA10 10
* #define PA12 14 
* #define PA11 15
* #define PA14 16
* #define PB12 17
* #define PB15 18
* #define PB14 19
* #define PA13 20
* #define PA8  21

### 3.2 Installation of stm32duino to Arduino IDE
Additional Boards Manager URLs: https://github.com/stm32duino/BoardManagerFiles/raw/master/STM32/package_stm_index.json
![lsn50-installation](https://user-images.githubusercontent.com/29994971/55409705-b14e6c80-558c-11e9-827b-2833cfe7e0e3.png)

### 3.3 Compilation of Arduino code using Arduino IDE on STM32 board
![lsn50-compilation](https://user-images.githubusercontent.com/29994971/55409490-5452b680-558c-11e9-8f01-c65ff357ca13.png)

## 4. Reference
* User manual for v1.0
[LSN50_LoRa_Sensor_Node_UserManual_v1.0.pdf](https://github.com/IoTThinks/EasyLoRaNode_LowPower/files/2973844/LSN50_LoRa_Sensor_Node_UserManual_v1.0.pdf)

* AT Manual for stock firmware [DRAGINO_STM_AT_Commands_v1.3.pdf](https://github.com/IoTThinks/EasyLoRaNode_LowPower/files/2973845/DRAGINO_STM_AT_Commands_v1.3.pdf)
