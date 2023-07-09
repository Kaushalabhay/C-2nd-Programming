#include<stdio.h>

int fabonacci( int i)
{
    if(i==0)
    {
        return 0;
    }
    else if(i==1)
    {
        return 1;
    }
    else
    return fabonacci(i-1) + fabonacci(i-2);

}

void main()
{
    int i;
    for(i ; i <10 ; i++);
    {
        printf("%d\n", fabonacci(i));
    }
}