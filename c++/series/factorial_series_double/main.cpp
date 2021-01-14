#include <iostream>

using namespace std;

int main()
{
   int input,fact=1;
   float sum = 0;
   cout<<"Enter the last number: ";
   cin>>input;
   cout<<"1"<<" - ";
   for(int i=2;i<=input;i=i+2)
   {
      fact *= i;
      sum += fact;
      if(i<input)
      {
           cout<<i<<"/"<<i<<"!"<<" + ";
      }
      else
      {
        cout<<i<<"/"<<i<<"!"<<" = ";
      }
   }
   cout<<sum;
    return 0;
}
