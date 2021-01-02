#include <iostream>

using namespace std;

int main()
{
    int input,count=0,*p;
    p=&input;
    cout<<"Enter the last number: ";
    cin>>input;
    cout<<"Address number: "<<p<<endl;
    if(*p!=0 && *p!=1)
    {
        for(int i=2; i<*p; i++)
        {
            if(*p % i==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            cout<<"prime number"<<endl;
        }
        else
        {
            cout<<"Not Prime number"<<endl;
        }
    }
    else
    {
        cout<<"Please input integer number"<<endl;
    }
    return 0;
}
