#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int array[2][4];
    for(int i=0; i<2; i++)
    {
        cout<<"please enter the temperature for 4 consecutive days  "<<i+1<<endl;
        for(int j=0; j<4; j++)
        {
            cout<<"Day"<<j+1<<" :";
            cin>>array[i][j];
        }
    }

      for(int i=0;i<2;i++)
    {
        float average=0;
        for(int j=0;j<4;j++)
        {
           average=average+ array[i][j];
        }
        cout<<"city "<<i+1<<" average temperature is: "<<average/4;
        cout<<endl;
    }


    return 0;
}
