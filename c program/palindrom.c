#include<stdio.h>
#include<stdlib.h>

int main()
{
    int number;
    int reverse=0;
    int orginal=number;
    printf("Enter a number :");
    scanf("%d",&number);
    while(number!=0)
    {
    reverse=reverse*10+(number%10);
    number=number/10;
    }
    if(orginal==number)
    {
    printf("Number is a palindrome ");
    }
    else
    {
        printf("Number is not a palindrome ");
    }


    return 0;
}
