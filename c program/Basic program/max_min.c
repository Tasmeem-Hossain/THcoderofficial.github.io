#include<stdio.h>
#include<stdlib.h>

int main()
{

    int x,y,z;

    printf("Enter First number x\t:");
    scanf("%d",&x);
    printf("Enter second number y\t:");
    scanf("%d",&y);
    printf("Enter third number z\t:");
    scanf("%d",&z);

    if(x>y)
    {
        if(x>z)
        {
            printf("x is maximum number");
        }
            else
            {
                printf("y is minimum number");
            }

    }

    else if(y>z)
    {
        printf("y is maximum number");
    }

        else
        {
            printf("z is minimum number");
        }






    return 0;
}
