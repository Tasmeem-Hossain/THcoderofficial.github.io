#include <iostream>

using namespace std;

void sum(int z)
{
    int sum1=0;
   while(z!=0)
    {
        sum1= sum1 + z % 10;
        z = z / 10;
    }
    cout<<"Sum of the reverse number: "<<sum1<<endl;

}

int reverse(int x)
{
    int rev=0;
    while(x!=0)
    {
        rev = rev * 10 + x % 10;
        x = x / 10;
    }
    sum(rev);
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
