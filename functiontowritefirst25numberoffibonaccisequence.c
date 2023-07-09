#include <stdio.h>
void fibonacci(int,int);

void main()

{
    int i , t, old = 0 , current = 1 , new;

    printf("%d\t%d\t",old, current);

    fibonacci(old,current);
}

void fibonacci(int old , int current)
{
    static int term = 2;

    int new;

    if(term<20)
    {
        new = old + current;

        printf("%d\t",new);
        term = term + 1;
        fibonacci(current,new);

    }
    else
    return;
}
