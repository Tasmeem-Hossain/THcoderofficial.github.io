
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

    float w1,w2,h1,h2,area,div2,sum1,sum2,kata;
    float deshim;


    cout<<"Enter the wide1:";
    cin>>w1;

    cout<<"Enter the wide2:";
    cin>>w2;

    cout<<"Enter the height1:";
    cin>>h1;

    cout<<"Enter the height2:";
    cin>>h2;

    sum1=w1+w2;
    double div1=(float) sum1 / 2;

    sum2=h1 + h2;

    div2 =(float) sum2 / 2;

    area= div1 * div2;

    deshim = area / 345.6;

    kata= (float)area /720;


    cout<<"Deshim\t:"<<deshim<<endl<<"kata:"<<kata;












    getch();
}
