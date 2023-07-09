#include<stdio.h>

void reverse(int array[],int n);
void printarray(int array[],int n);

void main(){
    int n;
    int array[] = {156,6756,546,453,345};

    reverse(array,5);
    printarray(array,5);
}

void printarray(int array[],int n)
{
     for(int i = 0 ; i < n; i++){
            printf("%d\t",array[i]);
        }
        printf("\n");
}


void reverse(int array[], int n){
        for(int i = 0 ; i < n/2 ; i++){
        int firstnum = array[i];
        int secondnum = array[n-i-1];

        array[i] = secondnum;
        array[n-i-1] = firstnum;
        }
}

