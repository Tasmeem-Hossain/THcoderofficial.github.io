#include <iostream>
#include<stdlib.h>
#include<string>
using namespace std;
string result(string x)
{
    string p;

    for(int i=x.size()-1; i>=0; i--)
    {
       p = p + x[i];
    }
return p;
}
int main()
{
    string input;
    cout<<"Enter a string: ";
    cin>>input;

    string z=result(input);
    cout<<z;
    return 0;
}
