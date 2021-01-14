#include <iostream>

using namespace std;

int main()
{
    int input,i,result,first=0,second=1;
    cout<<"Enter the last number: ";
    cin>>input;
    cout<<first<<" "<<second<<" ";
    for(i=2;i<input;i++)
    {
        result = first + second;
        cout<<result<<" ";
        first  = second;
        second = result;
    }
    return 0;
}
