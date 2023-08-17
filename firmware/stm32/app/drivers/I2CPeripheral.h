/*
 * I2CPeripheral.h
 *
 *  Created on: 3 Aug. 2023
 *      Author: trevo
 */

#ifndef I2CPERIPHERAL_H_
#define I2CPERIPHERAL_H_

#include "main.h"
#include "i2c.h"

class I2CPeripheral {
public:
    I2CPeripheral(I2C_HandleTypeDef &hi2c1, uint8_t address);

    void 	Write(uint8_t reg, uint8_t data);
    uint8_t Read(uint8_t reg);

    // ...other I2C functions as needed...

private:
    I2C_HandleTypeDef &_hi2c1;
    uint8_t _address;
};

#endif /* I2CPERIPHERAL_H_ */
