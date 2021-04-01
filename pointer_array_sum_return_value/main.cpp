#include <iostream>

using namespace std;

int sum(int *array, int size)
{
    int i, s=0;

    for(i=0; i<size; i++)
    {
        s= s + array[i];
    }
    return s;
}

int main()
{
    int input,s;
    cout<<"How Many Number Need: ";
    cin>>input;

    int array[input];
    for(int index=0; index<input; index++)
    {
        cout<<"Number "<<"["<<index<<"]"<<": ";
        cin>>array[index];
    }

  s=  sum( array, input);
  cout<<"sum is: "<<s;
    return 0;
}

