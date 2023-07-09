#include <stdio.h>

int main(){
    int number;
    printf("Enter a number : " );
    scanf("%d",&number);

    if(number >= 0){
        printf("number is positive\n");
        if(number %2 == 0){
        printf("number is even");
    }else{
        printf("number is odd\n ");
    }

}
}