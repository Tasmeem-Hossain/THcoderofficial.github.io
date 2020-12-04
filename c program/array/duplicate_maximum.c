#include<stdio.h>
#include<stdlib.h>

int main()
{

    int input,i,j;

    printf("How many number need :");
    scanf("%d",&input);
    int number[input];
    for(i=0; i<input; i++)
    {
        printf("Enter the number %d :",i);
        scanf("%d",&number[i]);
    }

    int max=number[0];


    for(i=1; i<input; i++)
    {
        if(number[i]>max)
        {
            number[i]=max;
        }

        printf("%d",max);
    }



    return 0;
}
