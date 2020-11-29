#include <iostream>

using namespace std;

int main()
{
   int input,last_digit;
   cout<<"Enter a number: ";
   cin>>input;

   last_digit=input%10;
   cout<<"last digit: "<<last_digit;

    return 0;
}
