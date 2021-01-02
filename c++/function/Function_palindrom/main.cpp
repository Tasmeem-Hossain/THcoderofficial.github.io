#include <bits/stdc++.h>
#include <iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

void palindrome(string input_string)
{
   string reverse_string = input_string;
   int length = input_string.length() -1;
   for(int i = length ; i >=0 ; i--)
   {
       reverse_string[i] = input_string[length- i];
   }

   if(input_string == reverse_string)
   {
       cout<<"Palindrome";
   }
   else
   {
       cout<<"Not palindrome";
   }
}
int main()
{
    string input;

    cout<<"Enter the string: ";
    cin>>input;

    palindrome(input);

    return 0;
}
