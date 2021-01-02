#include <iostream>
using namespace std;

int is_prime(int x)
{
    int i;
    int count = 0;
    if(x>1)
    {
        for(i=2; i<x; i++)
        {
            if(x % i==0 )
            {
                count++;
            }
        }

        if(count==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }

}

int main()
{
    int input;
    cout<<"Enter the number: ";
    cin>>input;

    int p = is_prime(input);
    cout<<p;
    return 0;
}
