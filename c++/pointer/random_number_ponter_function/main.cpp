#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void generate_array(int *a, int si)
{
    for(int i=0;i<si;i++)
    {
        a[i]= rand() % 9;
    }
}
int main()
{
 const  int size = 5;

   int array[size];
   generate_array(array,size);
    return 0;
}
