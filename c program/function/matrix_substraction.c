
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r1,r2,c1,c2,i,j,result[10][10],sum;

    printf("Enter a row for first matrix: \n");
    scanf("%d",&r1);
    printf("Enter a column for first matrix: \n");
    scanf("%d",&c1);


    /// First matrix Input
    int first[r1][c1];

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("First matrix[%d][%d]: \n",i,j);
            scanf("%d",&first[i][j]);
        }
    }
    /// Second matrix Input
    printf("\n\nEnter a row for second matrix: \n");
    scanf("%d",&r2);
    printf("Enter a column for second matrix: \n");
    scanf("%d",&c2);
    int second[r2][c2];

    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("Second matrix[%d][%d]: \n",i,j);
            scanf("%d",&second[i][j]);
        }
printf("\n");
    }


/// Print the value of First matrix
    printf ("\n\nFirst matrix: \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }
/// Print the value of second matrix
    printf("\n\nsecond matrix: \n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
    }


    /// Substraction of matrix
printf("\n\n Substraction of matrix: \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            result[i][j]=first[i][j] - second[i][j];
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }



    return 0;
}
