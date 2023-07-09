#include<stdio.h>

float product(int,float);

void main()
{
    int x;
    float y, prod;

    printf("ENTER THE FLOAT AND INTEGER VALUE\n");
    scanf("%f%d",&y,&x);

    prod = product(x,y);

    printf("\nproduct of %f * %d = %f ",y,x,prod);

}
float product(int x,float y)
{
    float p;
    p = x*y;
    return (p);
}
