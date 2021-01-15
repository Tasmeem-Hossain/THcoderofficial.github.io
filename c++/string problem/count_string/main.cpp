#include <iostream>
#include<string>
using namespace std;
void word_count(string a)
{
    int count=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==' ')
        {
            count++;
        }
    }
    cout<<count+1;
}
int main()
{
    string input;
    cout<<"Enter string: ";
    getline(cin,input);

     word_count(input);

    return 0;
}
