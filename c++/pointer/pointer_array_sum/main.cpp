#include <iostream>

using namespace std;

void sum(int *array, int size)
{
    int i, s=0;

    for(i=0; i<size; i++)
    {
        s= s + array[i];
    }
    cout<<"sum is: "<<s;
}

int main()
{
    int input;
    cout<<"How Many Number Need: ";
    cin>>input;

    int array[input];
    for(int index=0; index<input; index++)
    {
        cout<<"Number "<<"["<<index<<"]"<<": ";
        cin>>array[index];
    }

    sum( array, input);
    return 0;
}
