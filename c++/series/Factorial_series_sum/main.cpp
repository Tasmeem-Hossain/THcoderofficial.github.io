#include <iostream>

using namespace std;

int main()
{
    int input,i,fact=1;
    float sum=0;
    cout<<"Enter a number: ";
    cin>>input;
    for(i=1;i<=input;i++)
    {
        fact=fact * i ;
        sum = sum + 1.0 / fact;
    }
    cout<<"sum is: "<<sum;
    return 0;
}
