#include <iostream>
#include<stdlib.h>
#include<string>
using namespace std;

int main()
{
   string input;
   cout<<"Enter a string: ";
  getline(cin,input);
   for(int index=0;index<input.size();index++)
   {
       if(index==0)
       {
           input[index]=toupper(input[index]);
       }
       else if(input[index - 1]==' ')
       {
           input[index]=toupper(input[index]);
       }
   }
   cout<<input;
    return 0;
}
