#include <iostream>

using namespace std;
int reverse(int x)
{
    int sum=0;
    int rev=0;

    while(x!=0)
    {
        int y = x % 10;
        rev = rev * 10 + y;
        sum= sum + y;

        x = x / 10;
    }
    cout<<"sum of the reverse number: "<<sum<<endl;
    return rev;

}

int main()
{
    int input,a;
    cout<<"Enter a number: ";
    cin>>input;

    a= reverse(input);
    cout<<"Reverse number: "<<a<<endl;
    return 0;
}
