#include<stdio.h>
#include<stdlib.h>

void PrimeNumber(int num)
{
    int i;
    int count=0;

    if(num!=0 && num!=1)
    {
        for(i=2; i<num; i++)
        {
            if(num%i==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            printf("\t%d",num);
        }
    }
}

void EvenNumber(int num)
{
    if(num%2==0)
    {
        printf("\t%d",num);
    }
}

void OddNumber(int num)
{
    if(num%2!=0)
    {
        printf("\t%d",num);
    }
}
int main()
{
    int input,i;
    printf("Enter a number: ");
    scanf("%d",&input);
    int number[input];

 /// Array Input
    for(i=0; i<input; i++)
    {
        printf("Number[%d]: ",i);
        scanf("%d",&number[i]);
    }

    /// Prime Number

printf("Prime Number:");
    for(i=0; i<input; i++)
    {
        PrimeNumber(number[i]);
    }
    printf("\n\n");

    /// Even Number

    printf("Even Number: ");
    for(i=0;i<input;i++)
    {
        EvenNumber(number[i]);
    }
printf("\n\n");

    /// Odd Number

    printf("Odd Number: ");
    {
        for(i=0;i<input;i++)
        {
            OddNumber(number[i]);
        }
    }
    return 0;
}
