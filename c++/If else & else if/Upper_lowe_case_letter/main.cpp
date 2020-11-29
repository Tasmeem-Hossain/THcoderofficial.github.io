#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;

    if(ch>='A' && ch<='Z')
    {
        cout<<ch<<" is Upper-case  latter";
    }

    else if(ch>='a' && ch<='z')
    {
        cout<<ch<<" is Lower-case latter";
    }

    else if(ch>= '0' && ch<= '9')
    {
        cout<<ch<<"  is Digit";
    }

    else
    {
        cout<<ch<<" is Symbol";
    }

    return 0;
}
