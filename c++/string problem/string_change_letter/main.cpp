#include <iostream>
#include<stdlib.h>
#include<string>

using namespace std;
string result(string y)
{
    int char_code;
    for(int i = 0; i < y.size(); i++)
    {
        char_code = int( y[i]);

        if(char_code == 122)
        {
            y[i] = char(97);
        }
        else if(char_code == 90)
        {
            y[i] = char(65);
        }
        else if(char_code >= 65 && char_code <=90 || char_code >=97 && char_code<=122)
        {
            y[i] = char(char_code + 1);
        }
    }
    return y;
}
int main()
{
    string input,z;
    cout<<"Enter a name: ";
    cin>>input;
    z = result(input);
    cout<<z;
    return 0;
}
