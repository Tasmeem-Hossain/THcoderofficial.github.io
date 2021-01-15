#include <iostream>

using namespace std;

int main()
{
    int row,i,j;
    cout<<"input number of rows: ";
    cin>>row;
    for( i=1;i<=row;i++)
    {
        for(j=0;j<row-i;j++)
        {
            cout<<" ";
        }
        for(j=1; j<=i;j++)
        {
            cout<<i<<"  ";

        }
        cout<<endl;
    }
    return 0;
}
