#include<stdio.h>

void printHW(int count);

int main(){
    printHW(5);
    return 0;
}

    //RECURSIVE FUNCTION

void printHW(int count){
    if ( count == 0){
        return;
    }
    printf("HELLO ABHAY\nWE ARE ALL TOGETHER YOUR OUT-PUT (:\n\n");
    printHW(count-1);
}