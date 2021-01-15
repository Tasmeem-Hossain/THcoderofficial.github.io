#include<stdio.h>
#include<stdlib.h>

using namespace std;

void RandomNumberDivision(int *a,int size)
{
    for(int index=0;index<size;index++)
    {
        a[index]=rand() % 9;
    }
cout<<a;
}
int main()
{
   const int input=5;

    int array[input];

    RandomNumberDivision(array,input);

    return 0;
}
