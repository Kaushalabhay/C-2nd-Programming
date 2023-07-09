/*write two functions- one to print "hello" & second to print "good bye".*/

#include<stdio.h>

void printhello();           //DECLARATION & PROTOTYPE
void printgoodbye();

int main(){
   printhello();             //function call
   printgoodbye();
   
   return 0;
}

 //function defination
    
 void printhello(){
    printf("HELLO!\n");
    
 }
 void printgoodbye(){
    printf("GOOD BYE:)\n");

 }

