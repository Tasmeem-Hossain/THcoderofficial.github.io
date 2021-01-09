///1+ 3+ 5+......n;

#include <iostream>

using namespace std;

int main()
{
    int n,i;
    int sum=0;
    cout<<"Enter the last number: ";
    cin>>n;

    for(i=1;i<=n;i=i+2)
    {
        sum=sum+i;
        if(i==n)
        {
            cout<<i<<"=";
        }
        else
        {
            cout<<i<<"+"<<"= ";
        }
    }
    cout<<sum;
    return 0;
}
