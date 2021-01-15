#include <iostream>

using namespace std;
void tax5(int a)
{


    cout<<"0"<<"%";
}

void tax10(int b)
{

    float result1;

    result1 = b *  10 / 100;
    cout<<"10"<<"%"<<"="<<result1;
}

void tax15(int c)
{

    float result2;

    result2 = c *  15 / 100;
    cout<<"15"<<"%"<<"="<<result2;
}
int main()
{
    float amount;
    cout<<"Enter the amount: ";
    cin>>amount;

    if(amount<500000 )
    {
        tax5(amount);
    }
    else if(amount>500000 && amount<=1000000)
    {
        tax10(amount);
    }
    else if(amount>1000000 && amount<=5000000)
    {
        tax15(amount);
    }
    else
    {
        cout<<"invalid Number try again";
    }
    return 0;
}
