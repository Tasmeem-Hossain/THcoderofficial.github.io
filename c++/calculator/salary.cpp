#include<iostream>
#include<conio.h>
using namespace std;

int main()
{


 int Hours, Rate,tax,Total,Gross_payable;
 char Number1[1000], Number2[1000];// character for *************** 1st
 cout<<"Enter the * :" ;
 cin>>Number1;

 cout<<"Enter the - :";
 cin>>Number2;

 cout<<"Enter the Hours  :";
 cin>>Hours ;
 cout<<"Enter the Rate per Hour :";
 cin>>Rate ;

  Total =Hours * Rate;
  tax = Total * 10/100;
  Gross_payable= Total - tax;



 cout<<Number1<<endl<<Number2<<endl<<"Hours served\t:"<<Hours<<endl<<"Rate per hour\t:"<<Rate<<endl<<Number2<<endl<<"Total \t        :"<<Total<<endl<<"(-10% tax )\t:"<< tax<<endl <<Number2<<endl<<Number2<<endl<<"Gross payable\t:"<<Gross_payable <<endl<<Number1<<endl;







 getch();
}






