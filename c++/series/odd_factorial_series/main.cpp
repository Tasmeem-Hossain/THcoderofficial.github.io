///1 + 1/2! + 1/4! + 1/6+

#include <iostream>
#include<math.h>
using namespace std;

int main()
{
   int input,fact=1;
   float sum=0;
   cout<<"Enter the last number: ";
   cin>>input;
   cout<<"1"<<" + ";
   for(int i=2;i<input;i=i+2)
   {
       fact = fact * i;
       sum = sum + fact;
       if(i==input)
       {
            cout<<"1"<<"/"<<"!"<<i<<" + ";
       }
       else
       {
            cout<<"1"<<"/"<<"!"<<i<<" = ";
       }
   }
    return 0;
}
