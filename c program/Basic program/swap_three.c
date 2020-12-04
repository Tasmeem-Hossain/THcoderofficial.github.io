#include<stdio.h>
#include<stdlib.h>

int main()
{
    int number1,number2,number3,extra;

    printf("Enter a number1 : ");
    scanf("%d",&number1 );
     printf("Enter a number2 :");
    scanf("%d",&number2 );
     printf("Enter a number3 :");
    scanf("%d",number3 );

    extra=number1;
    number2=number3;
    number3=extra;

    printf("%d",number1 );
     printf("%d",number2 );
     printf("%d",number3 );





    return 0;
}
