#include <iostream>

using namespace std;
int binary_search(int array[],int n,int value)
{
    int first=0,
    last= n - 1,
    middle;
    while(first<=last)
    {
        middle= (first+last)/2;
        if(array[middle]==value)
        {
            return middle;
        }
        else if(array[middle] > value)
        {
            last = middle - 1;
        }
        else
        {
            first = middle + 1;
        }
    }
    return -1;
}
int main()
{

    while(1)
    {
    int input,NeedValue,z;
    cout<<"Enter rage of input: ";
    cin>>input;
    int array[input];
    for(int index=0;index<input;index++)
    {
        cout<<"Position "<< index <<" :"<<endl;
        cin>>array[index];
    }
    cout<<"Needed value: ";
    cin>>NeedValue;

   z= binary_search(array,input,NeedValue);
    if(z==-1)
    {
        cout<<"Volume Not Found"<<endl;
    }
    else
    {
        cout<<"The Volume found in Position Number: "<<z<<endl;
    }
    }
    return 0;
}
