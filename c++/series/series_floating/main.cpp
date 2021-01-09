///1.5+2.5+3.5+.....n

#include <iostream>

using namespace std;

int main()
{
    float n,i;
    float sum=0;
    cout<<"Enter last number: ";
    cin>>n;
    for(i=1.5;i<=n;i=i+1)
    {
        sum=sum + i;
        if(i==n)
        {
            cout<<i<<"= ";
        }
        else
        {
            cout<<i<<"+ ";
        }
    }
    cout<<sum<<endl;
    return 0;
}
