#include <iostream>

using namespace std;

int main()
{
    int input,i;
    cout<<"Enter a number: ";
    cin>>input;

    for(i=100;i>=input;i--)
    {
        if(input%2!=0)
        {
            cout<<"odd number"<<i<<endl;
        }
    }

    return 0;
}
