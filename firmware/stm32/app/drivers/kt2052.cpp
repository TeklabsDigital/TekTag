/*
 * kt2052.cpp
 *
 *  Created on: 2 Aug. 2023
 *      Author: trevo
 */

// https://au.mouser.com/datasheet/2/936/KTD2052_04b-2887351.pdf

#include "kt2052.h"
#include <drivers/I2CPeripheral.h>

kt2052::kt2052(I2CPeripheral& peripheral)
    : _mPeripheral(peripheral) {}

void kt2052::Setup() {
    // implementation of KTD2052_Setup using _mPeripheral
}

KTD2052_ID_t kt2052::GetID() {
    uint8_t id_data = _mPeripheral.Read(KTD2052_ID);

    // Check if the read operation was successful
    if(id_data == 0xFF) {  // Assuming 0xFF is the error code
        // Handle the error here. For example, you might want to return a specific error structure.
        KTD2052_ID_t error_id;
        error_id.vendor = 0xFF;
        error_id.die_id = 0xFF;
        return error_id;
    }

    KTD2052_ID_t id;
    id.vendor = (id_data & KTD2052_ID_VENDOR) >> 5; // shift right to get the value
    id.die_id = id_data & KTD2052_ID_DIE_ID; // mask the bits
    return id;
}

kt2052_Status kt2052::GetAndUpdateStatus() {
    uint8_t status = _mPeripheral.Read(KTD2052_MONITOR); // MONITOR register address
    _status.short_circuit_protection = status & 0x08;
    _status.bright_extend_dropout = status & 0x04;
    _status.cool_extend_die_temperature = status & 0x02;
    _status.under_voltage_lockout_or_over_temperature = status & 0x01;

    return _status;
}

void kt2052::Configure(uint8_t en_mode, bool be_en, uint8_t ce_temp, uint8_t fade_rate) {
    // Check the input parameters to ensure they are in the correct range
    if (en_mode > 3 || ce_temp > 3 || fade_rate > 7) {
        // Handle the error. For example, you could throw an exception or return a specific error code.
        return;
    }

    uint8_t control_data = (en_mode << 6) | (be_en << 5) | (ce_temp << 3) | fade_rate;
    _mPeripheral.Write(KTD2052_CONTROL, control_data);
}

void kt2052::ConfigurePatternGenerator(uint8_t pg_mode, uint8_t pg_time, uint8_t fade_rate) {
    // Validate input parameters to ensure they are in the correct range
    if (pg_mode > 3 || pg_time > 7 || fade_rate > 7) {
        // Handle the error. You might want to throw an exception or return an error code.
        return;
    }

    uint8_t control_data = (pg_mode << 6) | (pg_time << 3) | fade_rate;
    _mPeripheral.Write(KTD2052_PG_CNTL, control_data);
}

void kt2052::SetLED1Intensity(uint8_t redIntensity, uint8_t greenIntensity, uint8_t blueIntensity) {
    _mPeripheral.Write(KTD2052_IRED1, redIntensity);
    _mPeripheral.Write(KTD2052_IGRN1, greenIntensity);
    _mPeripheral.Write(KTD2052_IBLU1, blueIntensity);
}

void kt2052::SetLED2Intensity(uint8_t redIntensity, uint8_t greenIntensity, uint8_t blueIntensity) {
    _mPeripheral.Write(KTD2052_IRED2, redIntensity);
    _mPeripheral.Write(KTD2052_IGRN2, greenIntensity);
    _mPeripheral.Write(KTD2052_IBLU2, blueIntensity);
}

void kt2052::SetLED3Intensity(uint8_t redIntensity, uint8_t greenIntensity, uint8_t blueIntensity) {
    _mPeripheral.Write(KTD2052_IRED3, redIntensity);
    _mPeripheral.Write(KTD2052_IGRN3, greenIntensity);
    _mPeripheral.Write(KTD2052_IBLU3, blueIntensity);
}

void kt2052::SetLED4Intensity(uint8_t redIntensity, uint8_t greenIntensity, uint8_t blueIntensity) {
    _mPeripheral.Write(KTD2052_IRED4, redIntensity);
    _mPeripheral.Write(KTD2052_IGRN4, greenIntensity);
    _mPeripheral.Write(KTD2052_IBLU4, blueIntensity);
}


