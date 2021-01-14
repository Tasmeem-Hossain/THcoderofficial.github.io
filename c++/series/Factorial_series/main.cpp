///1+1/2!+1/3!+1/4!+...

#include <iostream>

using namespace std;

int main()
{
   int input,fact=1;
   float sum=0;
   cout<<"Enter the last number: ";
   cin>>input;
   cout<<" 1 "<< " + ";
   for(int i=2;i<=input;i++)
   {
       fact= fact * i;
       sum = sum + fact;
       cout<<"1/"<< i <<"!"<<" ";
       if(sum<1)
       {
           cout<<" = ";
       }
       else
       {
           cout<<" + ";
       }
   }

    return 0;
}
