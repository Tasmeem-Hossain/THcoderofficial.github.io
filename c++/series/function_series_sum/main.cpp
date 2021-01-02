#include <iostream>
#include <math.h>

using namespace std;

void series(int x)
{
    float total_sum = 0;
    for(int i=1; i<=x; i++)
    {
        total_sum = total_sum + 1.0/sqrt(i);
    }
    cout<<total_sum<<endl;
}

int main()
{
    int input;
    cout<<"Enter the last number: ";
    cin>>input;
    cout<<"1"<<"+";
    for(int i=2; i<=input; i++)
    {
        cout<<"1/"<<(char)251<<i;
        if(i<input)
        {
            cout<<" + ";
        }
        else
        {
            cout<<" = ";
        }
    }
    series(input);

    return 0;
}
