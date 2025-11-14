#include "mbed.h"

// Hardware Definitions
#define TRAF_GRN1_PIN PC_6
#define TRAF_YEL1_PIN PC_3
#define TRAF_RED1_PIN PC_2

#define LEDMASK_C 0b0000000001001000 
#define LEDMASK_B 0b0100000010000001   // PB_0, PB_7, PB_14

// Objects
//BusOut leds(TRAF_RED1_PIN, TRAF_YEL1_PIN, TRAF_GRN1_PIN);
PortOut leds(PortC, LEDMASK_C);
PortOut board_leds(PortB, LEDMASK_B);

int main()
{
    // while (true) {
    //     leds = 0;   //Binary 000
    //     board_leds = 0;
    //     wait_us(500000);
        
    //     leds = 0xFF;   //Binary 11111111
    //      board_leds = 0xFFFF;
    //     wait_us(500000);    
    // }

    while (true) {
        leds = leds ^ LEDMASK_C;   // toggle traffic LEDs
        board_leds = board_leds ^ LEDMASK_B;  // toggle onboard LEDs
        wait_us(500000);
    }

}




