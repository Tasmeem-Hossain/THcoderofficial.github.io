#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,i;
    int factorial=1;
    printf("Enter a number:");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        factorial*=i;
    }
    printf("The value of factorial %d! is = %d",x,factorial);



    return 0;
}
