#include <iostream>

using namespace std;

int main()
{
    #include<iostream>
using namespace std;
int main()
{
    int arr1[5]={10,20,30,40,50};
    int arr2[5]={1,2,3,4,5};
    int  sum=0;
    int temp=0;
    for(int i=0;i<5;i++)
    {
        temp=arr1[i]+arr2[i];
        sum=sum+temp;
    }
    cout << sum;
}
    return 0;
}
