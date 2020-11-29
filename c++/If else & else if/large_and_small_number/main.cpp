#include <iostream>

using namespace std;

int main()
{
    int n1;
    int n2;
    int n3;

    cout<<"Enter first number: ";
    cin>> n1 ;
    cout<<"Enter second number: ";
    cin>> n2 ;
    cout<<"Enter third number: ";
    cin>> n3 ;

    if(n1>n2)
    {
        if(n1>n3)
        {
            cout<<"Large number"<<endl;
        }
    }
    else if(n2>n3)
    {
        cout<<"small number"<<endl;
    }

    else
    {
        cout<<"Error";
    }



    return 0;
}
