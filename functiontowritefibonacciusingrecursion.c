#include<stdio.h>

void fibonacci(int,int);

int main(){
    int i , j , old = 0,current = 1,new;

    printf("%d\n%d\n",old,current);
    fibonacci(old,current);
    return 0;
}
void fibonacci(int old, int current)
{
    static int term = 2;
    int new;

    if(term<=20)
    {
        new = old + current;
         printf("%d\n",new);
        term = term + 1;
        fibonacci(current,new);
    }
    else
    return;
    
}
