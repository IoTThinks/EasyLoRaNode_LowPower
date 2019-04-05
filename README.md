# Easy LoRa Node - Low Power (With battery)
Low-Power Easy LoRa Node with STM32L0 and LoRa SX1278
Hardware is Dragino LSN50 v1.0 https://wiki.dragino.com/index.php?title=Lora_Sensor_Node-LSN50

Code is written in Arduino style from stm32duino https://github.com/stm32duino/Arduino_Core_STM32

## 1. Hardware
### 1.1 Pin locations
![lsn50-pinout](https://user-images.githubusercontent.com/29994971/55409802-e5c22880-558c-11e9-89fc-4ef4a07bb9c2.png)

### 1.2 Pin mapping for STM32L072CZT6 (used by LSN50)
![stm32L0](https://user-images.githubusercontent.com/29994971/55408675-b3173080-558a-11e9-8747-4baf99477c76.jpg)

### 1.3 Pin mapping for similar board Discovery_1072CZ_LRWAN1 (supported by stm21duino)
![disco_l072cz_lrwan1_2017-06-30_s4](https://user-images.githubusercontent.com/29994971/54474735-095e4280-481b-11e9-8ca4-b21c4cde157e.png)

## 2. Connect to hardware
### 2.1 Use STLink v2 to upload code
* LSN50 -> STLink v2
* PA14 -> SWCLK
* PA13 -> SWDIO
* VCC -> 3.3+
* GND -> GND

Switch of LSN50 is ISP.

### 2.2 Use UART to debug
* LSN50 -> CP1202 USB TTL
* GND -> GND
* PA2 -> RX
* PA3 -> TX

## 3. Programming guides
### 3.1 Pin translation between STM32 of Discovery_1072CZ_LRWAN1 to Arduino style
NEED TO DOUBLE CHECK THE PIN LAYOUT BETWEEN STM32L072CZT6 AND Discovery_1072CZ_LRWAN1 !!!

* PA_3, //D0
* PA_2, //D1
* PA_10, //D2
* PB_13, //D3
* PB_5, //D4
* PB_7, //D5
* PB_2, //D6
* PA_8, //D7
* PA_9, //D8
* PB_12, //D9
* PB_6, //D10
* PB_15, //D11
* PB_14, //D12
* PB_13, //D13 - default SB2 is closed
* PB_9, //D14
* PB_8, //D15

// Non-arduino headers

// Connector CN2
* NC, //D16 - BOOT0
* PA_13, //D17 - SWD
* PA_14, //D18 - SWD
* PH_1, //D19
* PH_0, //D20

// Connector CN3
* PA_1, //D21
* PC_2, //D22
* PC_1, //D23
* PA_12, //D24
* PA_11, //D25
* PA_0, //D26/A0
* PA_0, //D27/A1 - alias for A0 - requires closing solder bridge SB7
* PA_4, //D28/A2 - RADIO_DIO_5_PORT
* PA_4, //D29/A3 - alias for A2 - requires closing solder bridge SB8
* PB_9, //D30/A4 - requires closing solder bridge SB11
* PB_8, //D31/A5 - requires closing solder bridge SB12
* PA_5, //D32/A6 - RADIO_DIO_4_PORT
* PC_0, //D33 - RADIO_RESET_PORT
* (Confirmed) PA_7, //D34 - RADIO_MOSI_PORT
* (Confirmed) PA_6, //D35 - RADIO_MISO_PORT
* PB_3, //D36 - RADIO_SCLK_PORT
* (Confirmed) PA_15, //D37 - RADIO_NSS_PORT
* PB_4, //D38 - RADIO_DIO_0_PORT
* PB_1, //D39 - RADIO_DIO_1_PORT
* PB_0, //D40 - RADIO_DIO_2_PORT
* PC_13, //D41 - RADIO_DIO_3_PORT

### 3.2 Installation of stm32duino to Arduino IDE
Additional Boards Manager URLs: https://github.com/stm32duino/BoardManagerFiles/raw/master/STM32/package_stm_index.json
![lsn50-installation](https://user-images.githubusercontent.com/29994971/55409705-b14e6c80-558c-11e9-827b-2833cfe7e0e3.png)

### 3.3 Compilation of Arduino code using Arduino IDE on STM32 board
![lsn50-compilation](https://user-images.githubusercontent.com/29994971/55409490-5452b680-558c-11e9-8f01-c65ff357ca13.png)

## 4. Reference
* User manual for v1.0
[LSN50_LoRa_Sensor_Node_UserManual_v1.0.pdf](https://github.com/IoTThinks/EasyLoRaNode_LowPower/files/2973844/LSN50_LoRa_Sensor_Node_UserManual_v1.0.pdf)

* AT Manual for stock firmware [DRAGINO_STM_AT_Commands_v1.3.pdf](https://github.com/IoTThinks/EasyLoRaNode_LowPower/files/2973845/DRAGINO_STM_AT_Commands_v1.3.pdf)
