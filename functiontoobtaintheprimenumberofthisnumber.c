#include <stdio.h>

void prime(int);
void main()
{
    int num ;

    printf("   ENTER NUMBER :\n ");
    printf("--------------------\n");
    scanf("%d",&num);

    prime(num);
}
void prime(int num)
{
    int i = 2;
    printf("PRIME FACTOR OF %d ARE",num);

    while(num != 1)
    {
        if(num % i =0){
        printf("%d",i);
        }
        else
        {
            i++;
            continue;
        }
        num = num/i;
    }
}