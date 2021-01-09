#include <iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;
void result(float x,float z,float y)
{
    float sum1,sum2;
    sum1 = (x / y) * 100;
    sum2 = (z / y) * 100;

    cout<<"Parentage of "<<x<<" is: "<<sum1<<endl;
    cout<<"Parentage of "<<z<<" is: "<<sum2<<endl;
}
int main()
{
    int length;
    int count1 =0;
    int count2 =0;
    int input_count=0;
    char input[50];
    char finder1,finder2;

    cout<<"Enter a string: ";
    cin.get(input,50);
    cout<<"Take first letter: ";
    cin>>finder1;
    cout<<"Take second letter: ";
    cin>>finder2;

    length = strlen(input);
    cout<<"Length of string: "<<length<<endl; // finding length of string

    for(int i=0; input[i]; i++)
    {
        input_count += 1;
    }
    for(int i=0; i<input_count; i++)
    {
        if(input[i]==finder1)
        {
            count1 =  count1 + 1;
        }
        if(input[i]==finder2)
        {
            count2 =  count2 + 1;
        }
    }
     cout<<finder1<<" have "<<count1<<" character"<<endl<<finder2<<" have "<<count2<<" character"<<endl;
    result(count1,count2,length); /// function declaration
    return 0;
}
