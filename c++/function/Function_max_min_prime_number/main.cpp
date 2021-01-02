#include <iostream>
#include<stdlib.h>

using namespace std;

void prime(int n1,int n2,int n3)
{
    int i,j,k;
    if(n1!=0 && n1!=1 || n2!=0 && n2!=1 || n3!=0 && n3!=1)
    {
        int count=0;
        for(i=2,j=2,k=2; i<n1, j<n2, k<n3; k++,j++,i++)
        {
            if((n1 % i)==0 && (n2 % i)==0 &&(n3 % i)==0)
            {
                count++;
            }
        }

        if(count==0)
        {
            cout<<"Prime: "<<n1<<endl ;
            cout<<"Prime: "<<n2<<endl ;
            cout<<"Prime: "<<n3<<endl ;

        }
        else
        {
            cout<<"Not Prime: "<<n1<<endl ;
            cout<<"Not Prime: "<<n2<<endl ;
            cout<<"Not Prime: "<<n3<<endl ;

        }
    }
}

void maxmin(int x, int y, int z)
{

    if(x>y && x>z)
    {
        cout<<"max: "<<x<<endl;
    }
    else if (y>x && y>z)
    {
        cout<<"max: "<<y<<endl;
    }
    else
    {
        cout<<"max: "<<z<<endl;
    }

    if(x<y && x<z)
    {
        cout<<"min: "<<x<<endl;
    }
    else if(y<x && y<z)
    {
        cout<<"min: "<<y<<endl;
    }
    else
    {
        cout<<"min: "<<z<<endl;
    }

    prime(x,y,z);


}

int main()
{
    int first,second,third;

    cout<<"Enter the first number: ";
    cin>>first ;
    cout<<"Enter the second number: ";
    cin>>second ;
    cout<<"Enter the third number: ";
    cin>>third ;

    maxmin(first,second,third);

    return 0;
}
