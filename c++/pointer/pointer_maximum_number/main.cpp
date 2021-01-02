#include <iostream>

using namespace std;

int main()
{
    int input,input2;
    cout<<"Enter first number: ";
    cin>>input;
    cout<<"Enter second number: ";
    cin>>input2;

    if(input>input2)
    {
        cout<<"first number maximum"<<endl;
    }
    else
    {
        cout<<"second number minimum"<<endl;
    }
    return 0;
}
