#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,n2,c;

    printf("Enter a number n:");
    scanf("%d",&n);
    printf("Enter a number n2:");
    scanf("%d",&n2);

   c =n;
    n=n2;
    n2=c;
    printf("%d\n",n);
    printf("%d",n2);



    return 0;
}
