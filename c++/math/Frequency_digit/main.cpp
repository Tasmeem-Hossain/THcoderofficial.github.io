#include <iostream>

using namespace std;

int main()
{
    int input,result,i,j;
    cout << "Input any number: ";
    cin>>input;
    for(i=0;i<10;i++)
    {
        cout<<"The frequency of "<<i<<" = ";
       int count = 0;
        for(j=input;j>0;j= j / 10)
        {
            result = j % 10;
            if(result == i)
            {
                count++;
            }
        }
cout<<count<<endl;
    }
    return 0;
}
