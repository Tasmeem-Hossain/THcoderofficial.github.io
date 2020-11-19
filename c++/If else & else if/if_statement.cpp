#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    float a,b,sum;
   cout<<"Enter  frist number\t:";
   cin>>a;
   cout<<"Enter second number\t:";
   cin>>b;

    if(a+b>0)
    {
        cout<<"positive"<<endl;

    }
    if(a+b<0)
    {

        cout<<"negative"<<endl;
    }
    if(a+b==0)
    {
        cout<<"zero"<<endl;
    }
     sum=a+b;

     cout<<"sum\t:"<<sum<<endl;
    getch();
}
