#include <iostream>
#include<string>
using namespace std;

int main()
{
    string input;
    int x;
    cout<<"Enter a string: ";
    getline(cin,input);


    for(int index=0;index<input.size();index++)
    {
        x= int(input[index]);
        if(x == 122)
        {
            input[index]= char(97);
        }
        else if(x == 90)
        {
            input[index]=char(65);
        }
        else if((x>=65 && x<=90) || (x>=97 && x<=122))
        {
            input[index]= char(x + 1);
        }
    }
    cout<<input;
    return 0;
}
