#include <iostream>

using namespace std;
void generate_array(int *a,int size)
{
    for(int i=0;i<size;i++,a++)
    {
        *a= *a * 10;
    }

}
int main()
{
   int array[5]={10,20,30,40,50};
   generate_array(array,5);

    for(int i=0;i<5;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}
