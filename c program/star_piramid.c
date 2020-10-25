#include<stdio.h>
#include<stdlib.h>

int main()
{
    char x,y;
char n;
    printf("Enter a variable:");
    scanf("%c",&n);

    for(x=1;x<=n;x++)
    {

    for(y=1;y<=x;y++)
    {
        printf("%d ",y);
    }
    printf("\n");

    }
    return 0;
}
