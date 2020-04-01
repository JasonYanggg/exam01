#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);
PwmOut PWM1(D6);
AnalogIn Ain(A0);
Serial pc(USBTX, USBRX);

float ADCdata;

int main(void)
{
    // question 2
    uLCD.line(10, 10, 20, 10, RED);
    uLCD.line(20, 10, 20, 20, RED);
    uLCD.line(20, 20, 10, 20, RED);
    uLCD.line(10, 20, 10, 10, RED);
    uLCD.printf("\n\n\n\n106061233\n");
    wait(5);
    //question 3
    PWM1.period(0.001);
    while (1) {
        for (float i = 0; i < 1; i += 0.1) {
            PWM1 = i;
            ADCdata = Ain;
            pc.printf("%1.3f\r\n", ADCdata);
            wait(0.1);
        }
        for (float i = 1; i > 0; i -= 0.1) {
            PWM1 = i;
            ADCdata = Ain;
            pc.printf("%1.3f\r\n", ADCdata);
            wait(0.1);
        }
        
    }
}
