#include<stdio.h>
#include<stdlib.h>

int Max_Min_number (int[],int);

int Max_Min_number(int array[],int num)
{
    int i,index=0;

    for(i=1; i<num; i++)
    {
        if(array[i]>array[index])
        {
            index=i;
        }
    }
    return index;
}


int main()
{


    int input,i,location,maximum;
    printf("Enter a n :");
    scanf("%d",&input);
    int number[input];

    for(i=0; i<input; i++)
    {
        printf("number[%d] :",i);
        scanf("%d",&number[i]);
    }
    for(i=0; i<input; i++)
    {
        location =  Max_Min_number(number,input);
        maximum = number[location];
    }
    printf("%d",maximum);
    return 0;
}
