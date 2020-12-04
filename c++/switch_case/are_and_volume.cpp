#include <iostream>

using namespace std;

int main()
{
    while(1)
    {



        int digit;
        cout<<"Press 1 for  area of circle"<<endl;
        cout<<"Press 2 for  area of rectangle"<<endl;
        cout<<"Press 3 for  area of triangle"<<endl;
        cout<<"Press 4 for  volume of cylinder"<<endl;
        cout<<"Press 5 for  area of sphere"<<endl;
        cout<<"Press 6 for  area of cube"<<endl;
        cout<<"Enter a Digits: ";
        cin>>digit;
        switch(digit)
        {


        case 1:
        {
            float pa=3.1416;
            float area,r;
            cout<<"radius: ";
            cin>>r;
            area= pa * r * r;
            cout<<"Area of circle: "<<area<<endl;
            break;
        }
        case 2:
        {
            float leanth,width,area;
            cout<<"Leanth: ";
            cin>>leanth;
            cout<<"width: ";
            cin>>width;
            area= leanth * width;

            cout<<"Area of Rectangle: "<<area<<endl;

            break;
        }
        case 3:
        {

            float base,height,area;
            cout<<"Base: ";
            cin>>base;
            cout<<"Height: ";
            cin>>height;

            area = base * height;

            cout<<"Area of Triangle: "<<area<<endl;
            break;
        }
        case 4:
        {
            float radius,height,volume;
            float pa=3.1416 ;
            cout<<"Radius: ";
            cin>>radius;
            cout<<"Height: ";
            cin>>height;

            volume=pa * radius * radius * height;

            cout<<"volume of cylinder: "<<volume<<endl;
            break;
        }
        case 5:
        {
            int radius;
            float pa= 3.1416,volume;
            cout<<"Radius: ";
            cin>>radius;

            volume= (4 / 3) * pa * radius * radius * radius;
            cout<<"Volume of sphere: "<<volume<<endl;
            break;
        }
        case 6:
        {
            int a;
            float volume;
            cout<<"Edge: ";
            cin>>a;

            volume = a * a * a;

            cout<<"Volume of cube: "<<volume<<endl ;
            break;
        }
        default:
        {
        cout<<"Invalid number";
        }

        }
}
        return 0;

}
