#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);

int main(void)
{
    uLCD.line(10, 10, 20, 10, RED);
    uLCD.line(20, 10, 20, 20, RED);
    uLCD.line(20, 20, 10, 20, RED);
    uLCD.line(10, 20, 10, 10, RED);
    uLCD.printf("\n106061233\n");
    
}
