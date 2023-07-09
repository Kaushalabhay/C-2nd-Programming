#include<stdio.h>

int main(){

int a , b;
 printf("ENTER TWO NUMBERS: ");
 scanf(" %d %d ", &a , &b);

 if(a > b){
    printf("\n %d is greater ", a );
 }
 else{
    printf(" %d is greater ", b );
 }
 return 0 ;
}