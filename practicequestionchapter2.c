#include <stdio.h>
// Write a program to check if a number is divisible by 2 or not.
int main()
{
    int x;
    //Divisible by 2 = 1;
    //Not Divisible by 2 = 0;
    
    printf("Enter a number : ");
    scanf("%d\n",& x);

    printf("%d", x % 2 == 0 );
    return 0;
}