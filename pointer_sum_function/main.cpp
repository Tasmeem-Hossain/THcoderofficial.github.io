#include <iostream>

using namespace std;
void sum(int *n1,int *n2)
{
    int s;

    s = *n1 + *n2;
    cout<<"sum: "<<s;
}
int main()
{
    int num1,num2;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;

    sum(&num1,&num2);

    return 0;
}
