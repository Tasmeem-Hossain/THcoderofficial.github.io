#include<stdio.h>
#include<stdlib.h>

int main()
{
    int number,row,colum;
    printf("Enter a number:");
    scanf("%d",&number);
    for(row=0;row<=number;row++)
    {
        for(colum=0;colum<number-row;colum++)
        {
            printf(" * ");
        }



        printf("\n");
    }
    return 0;
}
