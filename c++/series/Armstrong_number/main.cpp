#include <iostream>

using namespace std;

int main()
{
    int input,orginal,arm=0,x;
    cout<<"Enter a number: ";
    cin>>input;
    orginal=input;
    while(input!=0)
    {
        x= input % 10;
        arm = arm  + (x * x * x);
        input = input / 10;
    }
    if(orginal==arm)
    {
        cout<<"Its a Armstrong number";
    }
    else
    {
        cout<<"Its not a Armstrong number";
    }
    return 0;
}
