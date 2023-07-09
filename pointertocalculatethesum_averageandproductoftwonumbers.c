#include<stdio.h>

void calculations(int *sum , int *product , int *average);

void main(){
    int a = 10 , b = 40;
    int sum , product, average;

    calculations(&sum,&product,&average);

    printf(" SUM IS : %d\n\n PRODUCT IS : %d\n\n AVERAGE IS : %d",sum,product,average);
}

void calculations(int *sum , int *product , int *average)
{
    int a = 10 , b = 40;
    *sum = a+b;
    *product = a*b;
    *average = (a+b)/2;

}
