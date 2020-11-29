#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;

    if(number <= 10)
    {
        cout<<"You enter a number less then 10"<<endl;
        if(number%2==0)
        {
            cout<<"Its a even number";
        }
        else
        {
            cout<<"its a odd number";
        }
    }
    else
    {
        cout<<"you Enter a number grater then 10: ";
    }
    return 0;
}
