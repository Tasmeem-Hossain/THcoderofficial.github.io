#include <iostream>

using namespace std;

int main()
{
    float r[4]= {22.5,23.5,24.5,25.5};
    cout<<"1st element: "<<r[0]<<endl;
    cout<<"1st element: "<<*r<<endl;
    cout<<"2nd element: "<<*(r+1)<<endl;
    cout<<"4st element: "<<*(r+3)<<endl;
    cout<<endl;

     cout<<"1st element address: "<<r<<endl;///print address

    cout<<endl;
    float *p;

    p= r;
    cout<<"1st element: "<<p[0]<<endl;
    cout<<"1st element: "<<*p<<endl;
    cout<<"2nd element: "<<*(p+1)<<endl;
    cout<<"4st element: "<<*(p+3)<<endl;
    cout<<"3rd element: "<<p[2]<<endl;
    cout<<endl;
    for(int i=0; i<4; i++)
    {
        cout<<(i+1)<<" element is: "<<*(p+i)<<endl; ///print pointer value
        cout<<(i+1)<<" element is: "<<(p+i)<<endl; ///print pointer address
    }

    return 0;
}
