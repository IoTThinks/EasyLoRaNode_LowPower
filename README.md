# EasyLoRaNode LowPower
Low-Power Easy LoRa Node with STM32L0 and LoRa SX1278
Hardware is Dragino LSN50 v1.0 https://wiki.dragino.com/index.php?title=Lora_Sensor_Node-LSN50

Code is written in Arduino style from stm32duino https://github.com/stm32duino/Arduino_Core_STM32

## 1. Hardware
### 1.1 Pin locations
![lsn50](https://user-images.githubusercontent.com/29994971/54474734-02cfcb00-481b-11e9-9166-04b12303a5eb.png)

### 1.2 Pin mapping
![disco_l072cz_lrwan1_2017-06-30_s4](https://user-images.githubusercontent.com/29994971/54474735-095e4280-481b-11e9-8ca4-b21c4cde157e.png)

## 2. Connect to hardware
### 2.1 Use STLink v2 to upload code
LSN50 -> STLink v2
PA14 -> SWCLK
PA13 -> SWDIO
VCC -> 3.3+
GND -> GND

Switch of LSN50 is ISP.

### 2.2 Use UART to debug
LSN50 -> CP1202 USB TTL
GND -> GND
PA2 -> RX
PA3 -> TX

## 3. Programming guides

## 4. Reference
User manual for v1.0
[LSN50_LoRa_Sensor_Node_UserManual_v1.0.pdf](https://github.com/IoTThinks/EasyLoRaNode_LowPower/files/2973844/LSN50_LoRa_Sensor_Node_UserManual_v1.0.pdf)

AT Manual for stock firmware [DRAGINO_STM_AT_Commands_v1.3.pdf](https://github.com/IoTThinks/EasyLoRaNode_LowPower/files/2973845/DRAGINO_STM_AT_Commands_v1.3.pdf)
