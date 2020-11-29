#include <iostream>

using namespace std;

int main()
{
        int input;
        cout<<"Enter a number: ";
        cin>>input;
        if(input>=35 && input<=75)
        {
            if(input%5==0 || input%2!=0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else
        {
            cout<<"No"<<endl;
        }
    return 0;
}
