#include <iostream>
#include<stdlib.h>
using namespace std;

int average(int even_sum, int even_count)
{
    return even_sum/even_count;
}

int main()
{
    int size= 5, even_count=0, even_sum =0, even_average =0;
    int inputs[size];

    cout<<"Enter 5 numbers: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>inputs[i];
    }

    for(int i = 0; i<size; i++)
    {
        if(inputs[i]%2 ==0)
        {
            even_count++;
            even_sum += inputs[i];
        }
    }
    if(even_count>0)
    {
        even_average = average(even_sum, even_count);
    }
    cout<<"Average for even number : "<<even_average<<endl;
    return 0;
}
