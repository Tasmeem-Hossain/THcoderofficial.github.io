#include <iostream>

using namespace std;

int main()
{

   char ch;
   cout<<"Enter an alphabet: ";
   cin>>ch;

   if((ch>='A' && ch<='z') || (ch>='a' && ch<='z') )
   {
       if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u')
       {
           cout<<"\""<<ch<<"\" is a vowel"<<endl;

       }
       else
       {
           cout<<"\""<<ch<<"\" is a consonent"<<endl;

       }
   }
       else
       {
           cout<<"\""<<ch<<"\" is not an alphabet";
       }





    return 0;
}
