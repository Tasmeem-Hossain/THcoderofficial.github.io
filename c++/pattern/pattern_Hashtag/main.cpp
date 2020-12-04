#include <iostream>

using namespace std;

int main()
{
    int row,column,input;
    cout<<"Enter a input: ";
    cin>>input;
    for(row=0;row<input;row++)
    {
        for(column=0;column<=row;column++)
        {
            cout<<"# ";
        }
        cout<<endl;
    }

    return 0;
}
