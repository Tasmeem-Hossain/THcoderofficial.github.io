#include <iostream>

using namespace std;

int main()
{
   int input,x=0,orginal;
   orginal=input;
   cout<<"Enter a number: ";
   cin>>input;


   while(input>0)
   {
      x=x * 10 +(input % 10);
      input = input / 10;
   }
   if(orginal==input)
   {
       cout<<"Symmetric";
   }
   else
   {
       cout<<"Not symmetric";
   }
    return 0;
}
