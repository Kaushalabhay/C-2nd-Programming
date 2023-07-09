/*WRITE A FUNCTION TO CALCULATE PERCENTAGE OF A STUDENT FOR MARKS IN MATHS , SCIENCE , SANSKRIT*/

#include<stdio.h>

int calcpercentage(int science , int maths , int sanskrit);

int main(){
    int maths = 90;
    int sc = 90;
    int sn = 90;

    printf("percentage is : %d ", calcpercentage(maths, sc , sn));
    return 0;
}

int calcpercentage(int science , int maths , int sanskrit){
    return(( science + maths + sanskrit)/3);
}