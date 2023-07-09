#include<stdio.h>

void leapyear(int);

void main()
{
    int year;

    printf("ENTER YEAR :\n");
    printf("------------\n");
    scanf("%d",&year);

    leapyear(year);

}
void leapyear(int year)
{
    if(year %4 == 0) /*OR*/     //   if(year %4 == 0  && year %100 != 0 || year %400 == 0)
        printf("%d is the leap year",year);
    else
        printf("%d is not a leap year",year);

}

