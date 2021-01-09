#include <iostream>

using namespace std;

int main()
{
   int i,j,n=5;
   /* cout<<"Enter a number: ";
    cin>>n;*/

    for(i=1; i<=n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            cout<<"  ";
        }
        for(j=0;j<i*2-1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
