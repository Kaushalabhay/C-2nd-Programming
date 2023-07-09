/*WRITE FUNCTION TO CALCULATE AREA OF CIRCLE , SQUARE AND RECTANGLE*/

#include<stdio.h>

float squarearea(float side);
float circlearea(float rad);
float rectanglearea(float a,float b);

int main(){
    float a = 5;
    float b = 10;
    float side = 4;
    float rad = 2;

    printf("AREA IS : %f\n",squarearea(side));
    printf("AREA Is : %f\n",circlearea(rad));
    printf("AREA IS : %f\n",rectanglearea(a,b));

    return 0;
}

float squarearea(float side){
    return side * side;                        
}

float circlearea(float rad){
    return 3.14 * rad * rad ;
}
float rectanglearea(float a, float b){
    return a * b;
}
