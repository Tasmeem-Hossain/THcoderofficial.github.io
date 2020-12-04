#include <stdio.h>
#include <stdlib.h>

int main()
{
   int input,i,j;
   int count;
   printf("Enter a number :");
   scanf("%d",&input);
   int number[input];

   for(i=0;i<input;i++)
   {
       printf("number [%d] :",i);
       scanf("%d",&number[i]);
   }


   for(int i=0;i<input;i++)
   {
       count=0;
       for(j=2;j<number[i];j++)
       {
           if(number[i]%j==0)
           {
               count++;
           }
       }
       if(number[i]!=0 && number[i]!=1)
       {

       if(count==0)
       {
           printf("prime number :%d\n",number[i]);
       }
   }
       }


    return 0;
}
