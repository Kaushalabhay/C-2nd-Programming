#include<stdio.h>

int main()
{
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0;

    printf("%d\n",x);
    printf("%d\n\n\n\n\n",*ptr);

    *ptr += 5;
    printf("%d\n",x);
    printf("%d\n\n\n\n\n",*ptr);

    *ptr += 500;
    printf("%d\n",x);
    printf("%d\n\n\n\n\n",*ptr);

    (*ptr)++;
    printf("%d\n",x);
    printf("%d\n\n\n\n\n",*ptr);

    return 10;
}