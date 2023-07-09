#include<stdio.h>

//marks >30 = pass
//marks <= fail

int main(){
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

   if(marks <= 30 && marks>= 0)
{printf("YOU ARE FAILED\n");}
else if( marks >30 && marks<= 100)
{printf("YOU ARE PASSED\n");}
else{
    printf(" WRONG MARKS");
}
return 0;
}