#include<stdio.h>
#include<stdlib.h>

int main()
{

int temp;

printf("Test data\t:");
scanf("%d",&temp);

if(temp<0)
{
    printf("Freezing weather");
}
else if(temp>=0&&temp<=10)
{
    printf("Very cold weather");
}
else if(temp>=20&&temp<=30)
{
    printf("Normal in temp");
}
else if(temp>=30&&temp<=40)
{
    printf("Hot");
}
else if(temp>=40)
{
    printf("Very Hot");
}



    return 0;
}
