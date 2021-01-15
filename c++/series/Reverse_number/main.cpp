#include <iostream>

using namespace std;

int main()
{
   int input,rev=0,x;
   cout<<"Enter a number: ";
   cin>>input;
   while(input!=0)
   {
       x= input % 10;
       rev= rev * 10 + x;
       input = input / 10;
   }
   cout<<"Reverse number is: "<<rev;
    return 0;
}
