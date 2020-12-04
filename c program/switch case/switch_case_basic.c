#include<stdio.h>
int main()
{
    int digit;
    printf("Enter 1-5 :");
    scanf("%d",&digit);
    switch(digit)
    {
    case 1:
        printf("Enter number is : ONE \n");
        break;
    case 2:
        printf("Enter number is :TWO\n");
        break;
    case 3:
        printf("Enter number is :THREE\n");
        break;
    case 4:
        printf("Enter number is :FOUR \n");
        break;
    case 5:
        printf("Enter number is :FIVE \n");
        break;
    default:
        printf("Enter wrong number");

    }
    return 0;

}
