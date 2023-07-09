#include <stdio.h>

void slice(char str[] , int n, int m);

void main()
{
    char str[] = "ABHAYKAUSHAL" ; 
    slice(str,0,12);
}

void slice(char str[] , int n , int m)
{
    char newstr[100];
    int j = 0 ;
    for(int i = 0 ; i <= 12; i++ , j++){
        newstr[j] = str[i];
    }
    newstr[j] = '\0';
    puts(newstr);
}