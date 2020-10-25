#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,row,colum;

    printf("Enter a variable:");
    scanf("%d",&x);

        for(row=1; row<=x; row++)
        {
            for(colum=1; colum<=x-row; colum++)
            {
                printf(" ");
            }
            for(colum=1;colum<=row;colum++)
            {
                printf(" * ");
            }
        printf("\n");
        }


    return 0;
}
