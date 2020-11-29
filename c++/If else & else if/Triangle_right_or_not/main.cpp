#include <iostream>

using namespace std;

int main()
{
    float a,b,c;
    cout<<"Enter a number of a: ";
    cin>>a;
    cout<<"Enter a number of b: ";
    cin>>b;
    cout<<"Enter a number of c: ";
    cin>>c;

    a = a * a;
    b= b * b ;
    c= c*c;

    if(a==b+c || b==a+c || c==a+b)
    {
        cout<<" Right Triangle";
    }
    else
    {
        cout<<" Not a Right Triangle";
    }

    return 0;
}
