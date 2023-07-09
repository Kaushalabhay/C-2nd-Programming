#include<stdio.h>
void swap(int *a , int *b);

void main(){
    int x = 4, y = 10;
    int a,b;

    printf("x = %d\t\t and y = %d\n\n\n\n",x,y);
    swap(&x,&y);    
    printf("X = %d\t\t AND Y = %d",x,y);

}
void swap(int *a , int *b){
    int t = *a;
    *a = *b;
    *b = t;
}