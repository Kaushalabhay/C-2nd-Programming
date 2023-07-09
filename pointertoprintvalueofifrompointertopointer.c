#include<stdio.h>

int main(){
    int i;
    int *ptr = &i;
    int **pptr = &ptr;

    **pptr = 50;
    printf("%d\n\n",i);
    printf("%d\n\n",*ptr);
    printf("%d\n\n",**pptr);

}