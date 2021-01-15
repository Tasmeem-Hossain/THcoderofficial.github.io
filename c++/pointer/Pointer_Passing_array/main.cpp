#include <iostream>

using namespace std;
void generateArray(int *a, int size)
{
    for(int i=0; i<size; i++)
    {
        *a= *a * 5;
    }

}
int main()
{
    int a[5]= {10,20,30,40,50};
    generateArray(a,5);
    for(int i=0; i<5; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
