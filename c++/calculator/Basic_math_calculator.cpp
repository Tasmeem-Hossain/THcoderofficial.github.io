#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()

{

float s1, s2,sum,mul;

cout<<"Enter the first number :";
cin>>s1;

cout<<"Enter the second number :";
cin>>s2;

sum=s1+s2;

mul=s1*s2;

double reminder= (float) s1 / s2;

cout<<fixed;

cout<<setprecision(5);

cout<<setw(50)<<"sum is :"<<sum<<endl<<setw(50)<<"multyfication is :"<<mul<<endl<<setw(50)<<"reminder is :"<<reminder<<endl;










    getch;
}
