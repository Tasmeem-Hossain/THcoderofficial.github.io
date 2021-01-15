#include <iostream>

using namespace std;

int main()
{
   int input,count=0;
   cout<<"Enter a number: ";
   cin>>input;
   int array[input];

   for(int i=1;i<=input;i++)
   {
       cout<<"Number"<<"["<<i<<"]"<<" :";
       cin>>array[i];
   }

   for(int i=0;i<input;i++)
   {
       for(int j=i+1;j<input;j++)
       {
           if(array[i]==array[j])
           {
               cout<<array[i]<<endl;
               count++;
               break;
           }
       }
   }
   cout<<"Total Duplicate number : "<<count;
    return 0;
}
