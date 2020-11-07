#include<stdio.h>
#include<stdlib.h>

void fabonacci_Number(int num)
{
    int i;
    int third=0;
    int frist=0;
    int second=1;


    for(i=0; i<num; i++)
    {
        printf("%d\t",third);
        frist=second;
        second=third;
        third=frist+second;

    }
}
int main()
{
    int input;
    printf("Enter a number :");
    scanf("%d",&input);
    fabonacci_Number(input);
    return 0;
}
