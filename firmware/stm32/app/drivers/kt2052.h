/*
 * kt2052.h
 *
 *  Created on: 2 Aug. 2023
 *      Author: trevo
 */

#ifndef KT2052_H_
#define KT2052_H_

#include "main.h"
#include <drivers/I2CPeripheral.h>

#define KTD2052_ADDRESS 0x75

// Registers
#define KTD2052_ID         0x00
#define KTD2052_MONITOR    0x01
#define KTD2052_CONTROL    0x02
#define KTD2052_IRED1      0x03
#define KTD2052_IGRN1      0x04
#define KTD2052_IBLU1      0x05
#define KTD2052_IRED2      0x06
#define KTD2052_IGRN2      0x07
#define KTD2052_IBLU2      0x08
#define KTD2052_IRED3      0x09
#define KTD2052_IGRN3      0x0A
#define KTD2052_IBLU3      0x0B
#define KTD2052_IRED4      0x0C
#define KTD2052_IGRN4      0x0D
#define KTD2052_IBLU4      0x0E
#define KTD2052_PG_CNTL    0x0F
#define KTD2052_PG_FADE    0x10
#define KTD2052_PG_RGB1    0x11
#define KTD2052_PG_RGB2    0x12
#define KTD2052_PG_RGB3    0x13
#define KTD2052_PG_RGB4    0x14
#define KTD2052_PG_WD      0x15

// define the bits for VENDOR and DIE_ID
#define KTD2052_ID_VENDOR ((uint8_t)0xE0) // Mask for bits 7:5
#define KTD2052_ID_DIE_ID ((uint8_t)0x1F) // Mask for bits 4:0

typedef struct {
    uint8_t vendor;
    uint8_t die_id;
} KTD2052_ID_t;

struct kt2052_Status {
    bool short_circuit_protection;
    bool bright_extend_dropout;
    bool cool_extend_die_temperature;
    bool under_voltage_lockout_or_over_temperature;
};

class kt2052 {
public:
    kt2052(I2CPeripheral& peripheral);

    void Setup();
    KTD2052_ID_t GetID();
    kt2052_Status GetAndUpdateStatus();
    void Configure(uint8_t en_mode, bool be_en, uint8_t ce_temp, uint8_t fade_rate);
    void ConfigurePatternGenerator(uint8_t pg_mode, uint8_t pg_time, uint8_t fade_rate);
    void SetLED1Intensity(uint8_t redIntensity, uint8_t greenIntensity, uint8_t blueIntensity);
    void SetLED2Intensity(uint8_t redIntensity, uint8_t greenIntensity, uint8_t blueIntensity);
    void SetLED3Intensity(uint8_t redIntensity, uint8_t greenIntensity, uint8_t blueIntensity);
    void SetLED4Intensity(uint8_t redIntensity, uint8_t greenIntensity, uint8_t blueIntensity);


private:
    I2CPeripheral& _mPeripheral;
    kt2052_Status _status;
};

#endif /* KT2052_H_ */
