#include <iostream>

using namespace std;

int main()
{
    float x,y;
    cout<<"Enter X: ";
    cin>>x;
    cout<<"Enter Y: ";
    cin>>y;

    if(x==0 && y==0)
    {
        cout<<"orgin";
    }
    if(x!=0 && y==0)
    {
        cout<<"X-Axis";
    }
    if(x==0 && y!=0)
    {
        cout<<"Y-Axis";
    }
    if( x>0 && y>0)
    {
        cout<<" 1st quadrant ";
    }
    if (x<0 && y>0)
    {
        cout <<"2nd quadrant ";
    }
    if (x<0 && y<0)
    {
        cout <<"3rd quadrant";
    }
    if (x>0 && y<0)
    {
        cout << "4th quadrant";
    }

    return 0;
}
