#include <iostream>

using namespace std;

void primeNumber(int x)
{
    int i;
    int count=0;

    if(x!=0 && x!=1)
    {
        for(i=2;i<x;i++)
        {
            if(x % 2==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            cout<<"prime number"<<endl;
        }
        else
        {
            cout<<"Not prime number"<<endl;
        }
    }
}
void perfectNUmber(int y)
{
   int i;
   int sum =0;
   for(i=1;i<y;i++)
   {
       if(y % i==0)
       {
            sum = sum + i;
       }
   }
   if(sum==y)
   {
       cout<<"perfect Number"<<endl;
   }
   else
   {
       cout<<"Not perfect number"<<endl;
   }
}

void palindrome(int z)
{

    int rev=0;
    int orginal;
    orginal=z;
    while(z>0)
    {
        rev = rev * 10 + (z % 10);
        z = z / 10;
    }
    if(orginal==rev)
    {
        cout<<"palindrome"<<endl;
    }
    else
    {
        cout<<"Not Palindrome"<<endl;
    }
}
int main()
{
    int input;

    cout<<"Enter a number: ";
    cin>>input;

    primeNumber(input);
    perfectNUmber(input);
    palindrome(input);
    return 0;
}
