#include <iostream>

using namespace std;

int main()
{
    int input,result,first=2,second=1;
    cout<<"Enter the last number: ";
    cin>>input;
    cout<<first<<" "<<second<<" ";

    for(int i=3;i<input;i++)
    {
        result = first + second;
        cout<<result<<" ";
        first=second;
        second=result;
    }

    return 0;
}
