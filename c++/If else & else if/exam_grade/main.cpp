#include <iostream>

using namespace std;

int main()
{


   float input;
   cout<<"Enter a number: ";
   cin>>input;
   if(input>=0 && input<=100)
 {

   if(input>=85 )
   {
       cout<<"A"<<endl;
   }
   else if(input>=80 )
   {
      cout<<"A-"<<endl;
   }
   else if(input>= 75)
   {
      cout<<"B+"<<endl;
   }
   else if(input>=70 )
   {
      cout<<"B"<<endl;
   }
   else if(input>=65 )
   {
      cout<<"B-"<<endl;
   }
   else if(input>=60 )
   {
      cout<<"c+"<<endl;
   }
   else if(input>=55 )
   {
      cout<<"C"<<endl;
   }
   else if(input>=50 )
   {
      cout<<"C-"<<endl;
   }
   else if(input>=45 )
   {
      cout<<"D+"<<endl;
   }
   else if(input>=40 )
   {
      cout<<"D"<<endl;
   }
   else
   {
      cout<<"Fail"<<endl;
   }
  }
  else
  {
      cout<<"Input wrong number"<<endl;
   }


    return 0;
}
