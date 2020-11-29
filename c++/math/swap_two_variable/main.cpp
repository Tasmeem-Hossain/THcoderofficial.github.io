#include <iostream>

using namespace std;

int main()
{
   int x,y;
   cout<<"Enter a number X: ";
   cin>>x;
   cout<<"Enter a number Y: ";
   cin>> y;

   x=x+y;
   y=x-y;
   x=x-y;

   cout<<"X is: "<<x<<endl;
   cout<<"Y is: "<<y<<endl;

    return 0;
}
