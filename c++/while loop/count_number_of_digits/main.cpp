#include <iostream>

using namespace std;

int main()
{
   int digits;
   int count=0;
   cout<<"Enter a digits: ";
   cin>>digits;

   while(digits!=0)
   {

       digits = digits / 10;
       count++;
   }
   cout<<"Number of digits: "<<count;

    return 0;
}
