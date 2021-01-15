#include <iostream>

using namespace std;
void DuplicateNumber(int *array,int size)
{
    for(int index=0;index<size;index++)
    {
        array[index] = array[index] * 5;
    }
    for(int index=0;index<size;index++)
    {
        cout<<array[index]<<" ";
    }
}
int main()
{
    int input;
    cout<<"How many value input: ";
    cin>>input;
    int array[input];
    for(int index=0;index<input;index++)
    {
        cout<<"number "<<"["<<index<<"]"<<" :";
        cin>>array[index];
    }

    DuplicateNumber(array,input);
    return 0;
}
