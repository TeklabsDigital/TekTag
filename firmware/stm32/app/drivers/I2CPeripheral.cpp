/*
 * I2CPeripheral.cpp
 *
 *  Created on: 3 Aug. 2023
 *      Author: trevo
 */

#include <drivers/I2CPeripheral.h>

I2CPeripheral::I2CPeripheral(I2C_HandleTypeDef &hi2c1, uint8_t address)
    : _hi2c1(hi2c1), _address(address) {}

void I2CPeripheral::Write(uint8_t reg, uint8_t data) {
    HAL_I2C_Mem_Write(&_hi2c1, _address<<1, reg, I2C_MEMADD_SIZE_8BIT, &data, 1, HAL_MAX_DELAY);
}

uint8_t I2CPeripheral::Read(uint8_t reg) {
    uint8_t data;
    if(HAL_I2C_Mem_Read(&_hi2c1, _address<<1, reg, I2C_MEMADD_SIZE_8BIT, &data, 1, HAL_MAX_DELAY) == HAL_OK) {
        return data;
    } else {
        // Error handling here. For example, you might want to return a specific error code.
        return 0xFF; // Example error code
    }
}

