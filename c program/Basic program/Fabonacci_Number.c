#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    int third=0;
    int frist=0;
    int second=1;
    int input;
    printf("Enter a number :");
    scanf("%d",&input);

    for(i=0; i<input; i++)
    {
        printf("%d\t",third);
        frist=second;
        second=third;
        third=frist+second;
    }
    return 0;
}
