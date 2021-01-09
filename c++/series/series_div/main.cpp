///1+ 1/2 + 1/3+.....1/n

#include <iostream>

using namespace std;

int main()
{
   int n,i;
   float sum=0.0;
cout<<"Enter the last digit: ";
cin>>n;
   for(i=1; i<=n; i= i + 1)
   {
       sum = sum + (1.0 / i);
       if(i==n)
       {
           cout<<i<<"= ";
       }
       else
       {
           cout<<"1/"<<i<<"+ ";
       }
   }
   cout<<sum;
    return 0;
}
