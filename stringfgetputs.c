#include <stdio.h>

int main()
{
    char fullname[112];
    fgets(fullname , 112 , stdin);
    puts(fullname);
}