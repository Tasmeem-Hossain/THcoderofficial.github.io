#include <iostream>

using namespace std;
void BubleSort(int array[],int x)
{
    int temp;
    for(int index=0;index<x-1;index++)
    {
        for(int j=index+1;j<x;j++)
        {
            if(array[index]>array[j])
            {
            temp=array[index];
            array[index]=array[j];
            array[j]=temp;
            }
        }
    }
    for(int index=0;index<x;index++)
    {
        cout<<"sorted data: "<<array[index]<<endl;
    }
}
int main()
{
   int input;
   cout<<"Enter the range: ";
   cin>>input;
   int array[input];

   for(int index=0;index<input;index++)
   {
       cout<<"Number"<< index <<" :"<<endl;
       cin>>array[index];
   }

       BubleSort(array,input);

    return 0;
}
