#include<stdio.h>

int main()
{
   int a , b;
   printf("ENTER TWO NUMBERS : ", a , b);
   scanf(" %d %d",&a , &b);

   printf("\nthe sum is %d + %d = %d", a, b , a + b);
   printf("\nthe multiply is %d * %d = %d", a, b , a * b);
   printf("\nthe divide is %d + %d / %d", a, b , a / b);
   printf("\nthe difference is %d + %d - %d", a, b , a - b);

   return 0;
   

}