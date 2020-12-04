#include <iostream>

using namespace std;

int main()
{
    int i;

   int A[4]={10,20,30,40};
   float B[4]={10.5,20.5,30.5,40.5};
   float c[4];
   float d[4];
   for(i=0;i<4;i++)
   {
       cin>>A[i];
   }
   for(i=0;i<4;i++)
   {
       cin>>B[i];
   }
   for(i=0;i<4;i++)
   {
       c[i]= A[i] + B[i];
       cout<<c[i]<<endl;
   }
   for(i=0;i<4;i++)
   {
       d[i]= A[i] * B[i];
       cout<<d[i]<<endl;
   }
    return 0;
}
