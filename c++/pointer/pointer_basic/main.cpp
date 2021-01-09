#include <iostream>

using namespace std;

int main()
{
    int number;
    int *p;
    p = &number;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Print p: "<<p<<endl<<"print *p: "<<*p<<endl<<"Print number: "<<number<<endl;
    return 0;
}
