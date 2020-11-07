#include<stdio.h>
#include<stdlib.h>


int Palindrome_Number(int num)
{
    int reverse=0,remainder;
    int orginal=num;

    while(num!=0)
    {

        reverse=reverse*10+(num%10);
        num/=10;
    }
    if(reverse==orginal)
    {
       return 0;
    }
    else
    {
       return 1;
    }
}


int main()
{
    int input,location,palindrome;
    printf("Enter a number :");
    scanf("%d",&input);
    location=Palindrome_Number(input);
    palindrome=location;
    if(location==0)
    {
    printf("%d is a palindrome",input);
    }
    else{
    printf("%d not a palindrome",input);
    }
    return 0;
}

