#include <iostream>

using namespace std;

int main()
{
    int input,input2,sum;
    int *p1;
    int *p2;
    p1=&input;
    p2 = &input2;
         cout<<"Enter number 1: ";
         cin>>input;
    cout<<"Enter number 2: ";
        cin>>input2;


    sum = *p1 + *p2;

    cout<<"sum: "<<sum;
          return 0;
}
