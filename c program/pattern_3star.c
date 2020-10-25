#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,r,c;
    printf("Enter a number");
    scanf("%d",&n);
    for(r=0;r<=n;r++)
    {
        for(c=0;c<=n-r;c++)
        {
            printf(" ");
        }
        for(c=0;c<r*2-1;c++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
