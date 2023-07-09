/*CONVERT FHAR TEMP TO CENTI*/

#include<stdio.h>

int main(){
    float cent, fahr;
    printf("ENTER TEMP IN FHAR : \n");
    scanf("%f\n", &fahr);
    
    cent = 5.0/9.0 * (fahr - 32.0);

    printf("TEMPERATURE IN CENT : %f \n",cent);

   return 0;

}