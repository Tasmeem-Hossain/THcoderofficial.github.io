#include <iostream>

using namespace std;

int main()
{

    int n1,n2,n3;
    cout<<" Younger age: ";
    cin>>n1;
    cout<<" Teenager age: ";
    cin>>n2;
    cout<<" older age: ";
    cin>>n3;

    if(n1>n2)
    {

            cout<<"Younger than  a Teenager"<<endl;

    }
    else if(n2>n3)
    {
        cout<<"Teenager"<<endl;
    }
    else
    {
        cout<<"older than Teenager"<<endl;
    }

    return 0;
}
