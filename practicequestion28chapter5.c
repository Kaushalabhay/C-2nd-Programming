/*WRITE A FUNCTION THAT PRINT "NAMASTE" IF USER IS INDIAN & "BONJOUR" IF USER IS FRENCH*/

#include<stdio.h>

void namaste();
void bonjour();

int main(){
    int I,F;
    printf("WRITE/PRESS [I] IF USER IS INDIAN & WRITE/PRESS [F] IF USER IS FRENCH: ");
    char ch;
    scanf("%c",&ch);

    if( ch == 'I'){
        printf("NAMASTE\n");}
    else if( ch == 'F') {
        printf("BONJOUR\n");
    }
    else{
        printf("SORRY FOR INCONVINENCE..... WE ONLY SERVE WITH INDIAN AND FRENCH LANGUAGE:)");
    }

    return 0;
}

void namaste(){
    printf("NAMASTE");
}
void bonjour(){
    printf("BONJOUR");
}



