#include <iostream>

using namespace std;
int binary_search(int array[],int n,int value)
{
    int first =0,last=n-1,middle;
    while(first<= last)
    {
        middle=(first + last)/2;
        if(array[middle]==value)
        {
            return middle;
        }
        else if(array[middle] > value)
        {
            last = middle -1;
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
   int array[10]={11,22,33,44,55,66,77,88,99};
   int z= binary_search(array,10,60);
   if(z==-1)
   {
       cout<<"Volume not found";
   }
   else
   {
       cout<<"The volume found in position number: "<<z;
   }
    return 0;
}
