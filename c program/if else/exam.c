#include<stdio.h>
#include<stdlib.h>

int main()
{
    float bangla, english,math,avg;

    printf("Number of Bangla:");
    scanf("%f",&bangla);
    printf("Number of English:");
    scanf("%f",&english);
    printf("Number of math:");
    scanf("%f",&math);

    avg=(bangla+english+math)/3;

    printf("Average:%f\n",avg);

    if(avg<=39.99)
    {
        printf("Grade F");
    }

    else if(avg>=40&&avg<=59.99)
    {
        printf("Grade B");
    }


    else if(avg>=60&&avg<=79.99)
    {
        printf("Grade A");
    }

    else if(avg>=80&&avg<=100)
    {
        printf("Grade A+");
    }
    else
    {
        printf("hello");
    }

    return 0;
}
