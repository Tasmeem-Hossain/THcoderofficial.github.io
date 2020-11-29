#include <iostream>

using namespace std;

int main()
{
   string name;
   int password;

   cout<<"Enter the name: ";
   cin>>name;
   cout<<"Enter your password: ";
   cin>>password;

   if(name=="tanim")
   {
       if(password==1234)
       {
           cout<<"Login successful";
       }
       else
       {
           cout<<"Incorrect password";

       }
   }
   else
   {
       cout<<"try again";
   }
    return 0;
}
