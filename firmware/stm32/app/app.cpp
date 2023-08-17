#include "app.h"

#include <drivers/kt2052.h>

extern "C" {

I2CPeripheral i2c1(hi2c1, KTD2052_ADDRESS);
kt2052 myDevice(i2c1);

void setup() {
	myDevice.Setup();

    KTD2052_ID_t id = myDevice.GetID();
    printf("Vendor ID: %d, Die ID: %d\n", id.vendor, id.die_id);

    // Configure the Pattern Generator Mode
    myDevice.Configure(1, 1, 00, 0);

    myDevice.SetLED1Intensity(0, 45, 45);
    myDevice.SetLED2Intensity(45, 45, 0);

}

uint8_t red = 0;
uint8_t green = 0;
uint8_t blue = 0;

void loop() {
    red += 1;
    green += 1;
    blue += 1;
////
////    // Apply the updated RGB values to LEDs
    myDevice.SetLED1Intensity(red, green, blue);
    myDevice.SetLED2Intensity(red, green, blue);
    HAL_Delay(100);


}

} // extern "C"
