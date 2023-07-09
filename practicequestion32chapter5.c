/*WRITE A FUNCTION TO CONVERT CELSIUS INTO FAHRENHEIT*/

#include<stdio.h>

float converttemperature(float celsius);

int main(){
   float fahr = converttemperature(0);
   printf("fahr : %f ", fahr);

    return 0;
}

float converttemperature(float celsius){
    float fahr = celsius * (9.0/5.0) + 32;
    return fahr;
}