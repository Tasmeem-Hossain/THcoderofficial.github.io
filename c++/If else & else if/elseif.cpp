#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

int s1,s2,sum;

cout<<"Enter the first number:";
cin>>s1;

cout<<"Enter the second number:";
cin>>s2;


sum=s1+s2;


if(sum>1)
{
  cout<<"possitive";
}

else if (sum<1)
{
    cout<<"negative";

}

else
    cout<<"Hello";



    getch();
}
