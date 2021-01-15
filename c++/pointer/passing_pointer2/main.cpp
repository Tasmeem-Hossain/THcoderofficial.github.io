#include <iostream>
#include<cstdlib>
using namespace std;
void generate_array(int a[],int size,int *b)
{
    for(int i=0;i<size;i++,a++)
    {
        *a=*a * 5;
    }
    for(int i=0;i<size;i++,b++)
    {
        *b = rand() % 10;
    }
}
int main()
{
     int a[5]={10,20,30,40,50};
    int b[5];
    int *c;
    c=&b[0];

    generate_array(a, 5,b);
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    for(int i=0;i<5;i++,c++)
    {
        cout<<*c<<" ";
    }

    return 0;
}
