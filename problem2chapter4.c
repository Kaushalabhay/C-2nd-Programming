#include <stdio.h>

//print a table of a number given by the user

int main(){
    int i, n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for( i=0;i<=10;i++){
        printf("%d\n",n*i);
    }
return 0;

}