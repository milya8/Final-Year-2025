#include "mbed.h"

// Hardware Definitions
#define TRAF_GRN1_PIN PC_6
#define TRAF_YEL1_PIN PC_3
#define TRAF_RED1_PIN PC_2
#define EXTRA1_PIN PB_0
#define EXTRA2_PIN PB_7
#define EXTRA3_PIN PB_14

// Objects
// DigitalOut grn(TRAF_GRN1_PIN);
// DigitalOut yel(TRAF_YEL1_PIN);
// DigitalOut red(TRAF_RED1_PIN,1);
BusOut leds(TRAF_RED1_PIN, TRAF_YEL1_PIN, TRAF_GRN1_PIN, PB_0, PB_7, PB_14);

int main()
{
    // while (true) {
    //     leds = 0;   //Binary 000
    //     wait_us(500000);
    //     leds = 4;   //Binary 111
    //     wait_us(500000);    
    // }

    // //for-loop
    // while (true) {
    //     for (int i = 0; i < 8; i++) {
    //         leds = i;
    //         wait_us(500000);
    //     }   
    // }

    leds = 0b000000;  // Start with all OFF

    while (true) {
        leds = ~leds;  // Toggle all bits (invert ON/OFF state)
        wait_us(500000);
    }
}


