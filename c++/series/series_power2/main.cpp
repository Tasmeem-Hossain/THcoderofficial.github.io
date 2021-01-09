#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n,i;
    int sum=0;
   cout<<"Enter the last number: ";
   cin>>n;
   for(i=1;i<=n;i=i+1)
   {
       sum =sum + pow(i,5);
       if(i<n)
       {
           cout<<i<<"^5"<<"= ";
       }
       else
       {
           cout<<i<<"^5"<<"+ ";
       }
       cout<<sum;
   }
    return 0;
}
