#include<stdio.h>
#include<stdlib.h>

int main()
{

int x,y,z;

printf("Enter the first number\t:");
scanf("%d",&x);
printf("Enter the second number\t:");
scanf("%d",&y);
printf("Enter the third number\t:");
scanf("%d",&z);

if(x==y&&x==y&&y==z)
{
    printf("Its a equilateral Triangle");
}
else if(x==y && x<z && y<z)
{
    printf("Its a isosceles Triangle");
}
else if(x!=y&&y!=z&&x!=z)
{
    printf("Its a scalene Triangle");

}




    return 0;
}
