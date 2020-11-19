#include<iostream>
#include<conio.h>

using namespace std;
int main()
{

    int km,meter,feet,centimeter,meter1,feet1,centimeter1,inches1;
    char ch[1000];

    cout<<"Enter a carecter\t:";
    cin>>ch;

    cout<<"Enter the first city\t:";
    cin>>km;

    meter= km * 1000;

    feet= km * 3280 ;

    double inches=(float) km * 10.079;

    centimeter=km * 100000;

     cout<<"Enter the second city\t:";
     cin>>km;

     meter1= km * 1000;

     feet1= km * 3280 ;

     inches1=(float) km * 10.079;

     centimeter1=km * 100000;


    cout<<"Meter\t     :"<<meter<<endl<<"Feet\t       :"<<feet<<endl<<"Inches\t     :"<<inches<<endl<<"centimeter\t:"<<centimeter<<endl<<ch<<endl<<"Meter\t:"<<meter1<<endl<<"Feet\t:"<<feet1<<endl<<"Inches\t:"<<inches1<<endl<<"centimeter\t:"<<centimeter1<<endl;











     getch();




}
