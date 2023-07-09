#include<stdio.h>
#include<math.h>

int power(int,int);

void main()
{
    int x,y;
    printf("ENTER TWO NUMBERS\n");
    scanf("%d%d",&x,&y);

    power(x,y);

}
int power(int x,int y)
{
    printf("%f",pow(x,y));
}
