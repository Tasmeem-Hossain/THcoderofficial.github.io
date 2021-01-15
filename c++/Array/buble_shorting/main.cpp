#include <iostream>

using namespace std;

int main()
{
    int input,temp;
    cout<<"Enter the range: ";
    cin>>input;
    int arr[input];
    for(int index=0; index<input; index++)
    {
        cout<<"Enter "<< index <<" number: "<<endl;
        cin>>arr[index];
    }
    for(int i=0; i<input-1; i++)
    {
        for(int j=i+1; j<input; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0; i<input; i++)
    {
        cout<<"buble sort: "<<arr[i]<<endl;

    }
    return 0;
}
