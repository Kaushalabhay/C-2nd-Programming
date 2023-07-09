#include<stdio.h>

int main(){
    int value = 20;
    int *ptr = &value;
    printf("ptr is : %u\n\n",ptr);
    *ptr++;
    printf("ptr is : %u\n\n",ptr);
    *ptr++;
    printf("ptr is : %u\n\n",ptr);
    *ptr++;


    float type = 40;
    float *pointer = &type;
    printf("ptr is : %u\n\n",pointer);
    *pointer++;
    printf("ptr is : %u\n\n",pointer);
    *pointer++;
    printf("ptr is : %u\n\n",pointer);
    *pointer++;


    char sum = 'c';
    char *pointervalue = &sum;
    printf("ptr is : %u\n\n",pointervalue);
    *pointervalue++;
    printf("ptr is : %u\n\n",pointervalue);
    *pointervalue++;
    printf("ptr is : %u\n\n",pointervalue);
    *pointervalue++;
}