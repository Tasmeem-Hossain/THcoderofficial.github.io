#include <iostream>

using namespace std;

int main()
{
int input,i,sum=0;
cout<<"Enter a number: ";
cin>>input;
for(i=1;i<=input;i++)
{
    sum=sum + i*i;
    if(i==input)
    {
        cout<<"1"<<"="<<i;
    }
    else
    {
        cout<<"+ "<<i;
    }
}
    return 0;
}
