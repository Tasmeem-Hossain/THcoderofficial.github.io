#include <iostream>

using namespace std;

int main()
{
   int number1,number2,HCF,i;
   cout<<"Enter number1: ";
   cin>>number1;
   cout<<"Enter number2: ";
   cin>>number2;

   for(i=1;i<=number1 && i<=number2;i++)
   {
       if(number1%i==0 && number2%i==0)
       {
            HCF=i;
       }

   }
   cout<<"HCF: "<<HCF;
    return 0;
}
