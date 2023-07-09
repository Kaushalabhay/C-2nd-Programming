#include<stdio.h>

int main (){
    int operator;
    int a , b ;
    printf("ENTER TWO NUMBERS:\n");
    scanf("%d%d",&a,&b);

    printf("CHOOSE WHICH OPERATION DO YOU WANT TO PERFORN:\n1.adittion\n2.substraction\n3.multiplication\n4.division\nENTER YOUR CHOICE:");
    scanf("%d",&operator);

    switch (operator)
    {
        case 1:
        printf("%d + %d = %d",a,b,a+b);
        break;

        case 2:
        printf("%d / %d = %d",a,b,a/b);
        break;

        case 3:
        printf("%d * %d = %d",a,b,a*b);
        break;

        case 4:
        printf("%d - %d = %d",a,b,a-b);
        break;

    default:
        printf("invalid choice");
        break;
    }
    return 0;
}