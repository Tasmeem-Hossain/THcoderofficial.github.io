#include <iostream>

using namespace std;

int main()
{
    int input,rev=0;
    cout<<"Enter Input: ";
    cin>>input;
   int orginal = input;
    while(input!=0)
    {
        rev = rev * 10 + (input % 10);
        input = input / 10;
    }
    if(orginal==rev)
    {
        cout<<"Number is palindrome";
    }
    else
    {
        cout<<"Number is not palindrome";
    }


    return 0;
}
