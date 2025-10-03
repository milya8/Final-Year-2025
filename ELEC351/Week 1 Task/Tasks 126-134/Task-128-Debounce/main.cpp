#include "mbed.h"

DigitalIn ButtonA(PG_0);                    //Button A
DigitalIn BlueButton(USER_BUTTON);          //Blue user button
DigitalOut redLED(PC_2);                    //Red Traffic 1

int main()
{
    redLED = 0;

    while (true) {

        //Wait for a press
        //while (ButtonA==0) { };
        while (BlueButton==0) { };

        //wait_us(100000); // 0.1s
        //wait_us(1); // 0.000001s
        wait_us(5000000); // 5.0s

        //Toggle LED
        redLED = !redLED;

        //Wait for release
        //while (ButtonA==1) { };
        while (BlueButton==1) { };

        //wait_us(100000); // 0.1s
        //wait_us(1); // 0.000001s
        wait_us(5000000); // 5.0s
    }
}

