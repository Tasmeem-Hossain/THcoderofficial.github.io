#include <iostream>
#include<string>
using namespace std;
void vowel_count(string a)
{
    int count =0;
    for(int i=0;i<int(a.size());i++)
    {
        if( a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            count++;
        }
        if( a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
        {
            count++;
        }
    }
    cout<<count;
}
int main()
{
    string input;
    cout<<"Enter the string: ";
    getline(cin,input);

    vowel_count(input);

    return 0;
}
