#include <iostream>

using namespace std;
int HCF (int number1, int number2)
{
    int i;
    int HCF;
    for(i=1; i<=number1 && i<=number2 ; i++)
    {
        if(number1 % i && number2 % i==0)
        {
            HCF = i;
        }
    }

    return HCF;
}

int LCM (int number1, int number2)
{
    int i,x,LCM;
    x= number1 * number2;
    for(i=1; i<=x; i++)
    {
        if(x % i==0 && i % number1==0 && i % number2==0)
        {
            return i;
            break;
        }
    }
}
int main()
{
    int n1,n2,H,L;

    cout<<"Enter number1: ";
    cin>> n1;
    cout<<"Enter number2: ";
    cin>> n2;

    H=HCF(n1,n2);
    cout<<"HCF is: "<<H<<endl;
    L=LCM(n1, n2);
    cout<<"LCM: "<<L<<endl;
    return 0;
}
