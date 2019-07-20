// LoRa
#include <SPI.h>
#include <LoRa.h>

#define LORA_NSS   PA15
#define LORA_SCK   PA5
#define LORA_MOSI  PA7
#define LORA_MISO  PA6
#define LORA_DIO0      PB10
#define LORA_NRESET  PB0

#define LORA_SF 12 // 7 is the fastest. 12 is is farthest
#define LORA_CR 5
#define LORA_BW 41.7E3 //125E3
#define LORA_PREAMBLE_LENGTH  8

// Sensor
#include <SHT1x.h>
#define dataPin PB3
#define clockPin PB4
SHT1x sht1x(dataPin, clockPin);
