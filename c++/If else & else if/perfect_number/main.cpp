#include <iostream>

using namespace std;

int main()
{
   int input,i;
   int sum=0;
   cout<<"Enter a number: ";
   cin>>input;

   for(i=1;i<input;i++)
   {
       if(input % i==0)
       {
           sum=sum+i;
       }
   }
 if(sum==input)
 {
     cout<<"perfect";
 }
 else
 {
     cout<<"not perfect";
 }

    return 0;
}
