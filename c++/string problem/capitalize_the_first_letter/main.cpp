#include <iostream>
#include<stdlib.h>
#include<string>
using namespace std;
void capitalize_the_first_letter(string text)
{
    for (int x = 0; x < text.length(); x++)
	{
		if (x == 0)
		{
			text[x] = toupper(text[x]);
		}
		else if (text[x - 1] == ' ')
		{
			text[x] = toupper(text[x]);
		}
	}
cout<<text ;  // return element;
}
int main()
{
    string input,result;
    cout<<"Enter a string: ";
    cin>>input;

    /*result =*/ capitalize_the_first_letter(input);
   // cout<<result;
    return 0;
}
