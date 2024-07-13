#include "mbed.h"

DigitalOut led(LED1); // fill your pin

int main(){
    printf("mbed-ce-custom-target-Bluepill\n");
    while(1){
        led = !led;
        thread_sleep_for(500);
    }
}