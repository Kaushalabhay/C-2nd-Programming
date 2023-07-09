                    /*CALCULATE THE SUM OF DIGITS OF A FIVE DIGIT NUMBER */
                       /*PROGRAM WITH RECURSION AND WITHOUT RECURSION*/

#include <stdio.h>

int sum(int);         //FUNCTION WITHOUT RECURSION
int rsum(int);        //FUNCTION WITH RECURSION

void main()
{
    int s,rs;
    int n;

    printf("\nENTER NUMBER\n");
    printf("--------------\n\n");
    scanf("%d",&n);

    s = sum(n);         /*FUNCTION CALL WITHOUT RECURSION*/
    printf("\nSUM DIGITS WITHOUT RECURSION IS %d",s);
    rs = rsum(n);       /*FUNCTION CALL WITH RECURSION*/
    printf("\n\nSUM OF DIGIT USING RECURSION IS %d",rs);

    printf("\n\n------------------------------------");
}

int sum(int num)        /*FUNCTION WITHOUT RECURSION*/
{
    int remainder , sum = 0;

    /*THIS TIME OUT CODE IS VERY SHORT BECAUSE WE CAN NOW USE A WHILE"
    CLAUSE WHICH WAS NOT USED IN THE EARLY INSTANCE OF THIS PROGRAM*/

    while (num>0)
    {
        remainder = num % 10;  /*CALCULATE REMINDER */
        sum = sum + remainder; /* UPDATE SUM*/
        num = num/10;           /*REMOBE LAST DIGIT*/
    }
    return (sum);
}

int rsum(int num)            /*FINCTION WITH RECURSION*/
{
    int sum = 0;
    int remainder;

    if(num != 0)
    {
        remainder = num % 10;   /*CALCULATE REMINDER */
        sum = remainder + rsum(num/10);    /*RECURSIVE CALL*/

    }
    return sum;
}