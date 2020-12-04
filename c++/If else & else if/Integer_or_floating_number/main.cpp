#include <iostream>

using namespace std;

int main()
{


   float input;
   cout<<"Enter a number: ";
   cin>>input;

  int a = (int) input;
  if(input==a)
  {
      cout<<"integer"<<endl;
  }
  else
  {
      cout<<"floating point number"<<endl;
  }


    return 0;
}
