#include<stdio.h>

int main(){
    int n , i , j;
    printf(" ENTER A NUMBER <= 11 FOR GENERATING THE PATTERN\n ");
    scanf("%d",&n);
    printf("DESIRED PATTERN IS\n");
    for(i=1;i<=n;i++)
    {
        printf("\t");
        for(j=1;j<=n-1;j++)     /*for blank in upper portion*/
            printf("    ");
        for(j=n;j>=n+1-i;j--)
            printf("%3d",j);
        for(j=n+2-i;j<=i;j++)
            printf("%3d",j);
    }
    for(i=1;i<n;i++)
    {
        printf("\t");
        for(j=1;j<=i;j++)
            printf("    ");
        for(j=n;j>=i+1;j--)
            printf("%3d",j);
        for(j=i+2;j<=n;j++)
            printf("%3d",j);
        printf("\n");            
    }    
        return 0;
    }
