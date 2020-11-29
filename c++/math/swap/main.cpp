#include <iostream>

using namespace std;

int main()
{
    int x,y,result;
    cout<<"Enter a number x: ";
    cin>> x;
    cout<<"Enter a number y: ";
    cin>> y;


    result=x;
    x=y;
    y=result;

    cout<<"X is: "<<x<<endl;
    cout<<"Y is: "<<y<<endl;


    return 0;
}
