#include <iostream>

using namespace std;
int sum(int x, int y)
{
    int sum=0;

    for(int i=x; i<=y; i++)
    {
        if(x!=y)
        {
            cout<<"number "<<"["<<i<<"]"<<" :";
            cin>>i;
        }
        else
        {
            return x;
        }
    }

    for(int i=x; i<=y; i++)
    {

        sum = sum + i;
    }
    return sum;

}
int main()
{
    int first,second,s;

    cout<<"Enter first number: ";
    cin>>first;
    cout<<"Enter second number: ";
    cin>>second;

    s = sum(first,second);

    cout<<s;
    return 0;
}
