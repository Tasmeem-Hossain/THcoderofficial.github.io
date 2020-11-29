#include <iostream>

using namespace std;

int main()
{
        int a,b,c;

        cout<<"Input first side: ";
        cin>>a ;
        cout<<"Input Second side: ";
        cin>> b;
        cout<<"Input Third side: ";
        cin>> c;


        if(a==b && b==c && c==a)
        {
            cout<<"Triangle is equilateral triangle";
        }
        else if(a!=b && b!=c && c!=a)
        {
            cout<<"Triangle is Scalene Triangle";
        }
        else
        {
            cout<<"Triangle is Isosceles Triangle";
        }

    return 0;
}
