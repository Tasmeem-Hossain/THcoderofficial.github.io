#include <iostream>

using namespace std;
void swap(int *a, int *b)
{
    int t;

    t=*a;
    *a=*b;
    *b=t;
    cout<<"Number1: "<<a<<endl;
    cout<<"number2: "<<b<<endl;
}
int main()
{
    int input1,input2;
    cout<<"Enter the first element: ";
    cin>>input1;
    cout<<"Enter the second element: ";
    cin>>input2;

    swap(&input1,&input2);
    return 0;
}
