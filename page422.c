#include <stdio.h>

int main(){
    int age;
    printf("ENTER YOUR AGE IN YEARS \n \n");
    scanf("%d",&age);

    printf("\n \n YOUR AGE IS : %d \n \n", age);

    ( age > 18 ) ? printf(" YOU MUST VOTE \n")  :  printf("YOU CANT VOTE");
}