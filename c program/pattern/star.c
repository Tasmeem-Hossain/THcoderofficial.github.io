#include<stdio.h>
#include<stdlib.h>

int main()
{
    int row,colum,n;

    printf("Enter a variable:");
    scanf("%d",&n);

    for(row=0;row<=n;row++)
    {
        for(colum=0;colum<=row+n;colum++)
        {
            printf("  ");
        }

        for(colum=n;colum>=row;colum--)
        {
            printf(" * ");
        }
        printf("\n");
    }



    return 0;
}
