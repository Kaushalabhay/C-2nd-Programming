#include <stdio.h>

//print all odd numbers from 3 to 50

int main(){
    for( int i=2; i<=50; i++){
     if( i % 2 != 0){
         printf("%d\n",i);
     }
}
return 0;
}