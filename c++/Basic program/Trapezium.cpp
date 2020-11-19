#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{


float area, a,b, height;

cout<<"Enter the a:";
cin>>a;

cout<<"Enter the b:";
cin>>b;

cout<<"Enter the height:";
cin>>height;

area= 1.0/2 * (a+b) * height;

cout<<fixed;

cout<<setprecision(0);

cout<<setw(50)<<"Area of Trapizium:"<<area;








    getch();
}
