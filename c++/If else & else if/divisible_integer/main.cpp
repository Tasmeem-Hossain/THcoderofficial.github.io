#include <iostream>

using namespace std;

int main()
{
    int input;
    cout<<"Enter a number: ";
    cin>>input;

    if(input%2!=0)
    {
        cout<<"divisible by 2 "<<endl;
    }
     if(input%3!=0)
    {
        cout<<"divisible by 3 "<<endl;
    }
     if(input%5!=0)
    {
        cout<<"divisible by 5 "<<endl;
    }
     if(input%7!=0)
    {
        cout<<"divisible by 7 "<<endl;
    }
     if(input%10!=0)
    {
        cout<<"divisible by 10 "<<endl;
    }
    else
    {
        cout<<"Error"<<endl;
    }


    return 0;
}
