#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,i;
    int first=0;
    int second=1;
    int fibo;
    while (1)
    {

        printf("Enter a number x :");
        scanf("%d",&x);
        for(i=1; i<x; i++)
        {
         if(i<1)
         {
           first=i;
           printf("%d",first);
         }
         else
         {
             fibo=first+second;
             first=second;
             second=fibo;
         }
         printf("%d\n",fibo);
        }

        printf("fibonacci series:%d\n",fibo);
    }

    return 0;
}
