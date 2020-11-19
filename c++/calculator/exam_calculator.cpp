#include<iostream>
#include<conio.h>

using namespace std;
int main()
{


int math,eng,bng,sc,phy,sum,percentage,total=500;

cout<<"Enter the frist subject\t:";
cin>>math;

cout<<"Enter the second subject\t:";
cin>>eng;

cout<<"Enter the third subject\t:";
cin>>bng;

cout<<"Enter the fourth subject\t:";
cin>>sc;

cout<<"Enter the fifth subject\t:";
cin>>phy;


sum=math + eng + bng + sc + phy;

double aggregate=(float) sum / 5;

percentage= (sum * 100) / total;



cout<<"Sum\t:"<<sum<<endl<<"Aggregate\t:"<<aggregate<<endl<<"percentag\t:"<<percentage<<endl;





















    getch();
}
