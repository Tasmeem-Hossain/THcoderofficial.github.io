#include <iostream>

using namespace std;

int main()
{
    int r1,c1,r2,c2,i,j,result[10][10],k;
    //first matrix
    cout<<"Enter first matrix row: ";
    cin>>r1 ;
    cout<<"Enter first matrix column: ";
    cin>> c1;

    int first[r1][c1];

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            cout<<"Number "<<"["<<i<<"]"<<"["<<j<<"]"<<" :";
            cin>>first[i][j];
        }
    }

//second matrix
    cout<<"Enter second matrix row: ";
    cin>>r2 ;
    cout<<"Enter second matrix column: ";
    cin>> c2;


    int second[r2][c2];

    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            cout<<"Number "<<"["<<i<<"]"<<"["<<j<<"]"<<" :";
            cin>>second[i][j];
        }
    }

//print first matrix
cout<<"First matrix"<<endl;
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        cout<<first[i][j]<<"\t";

    }
    cout<<"\n";
}
cout<<endl;
//print second matrix
cout<<"second matrix"<<endl;
for(i=0;i<r2;i++)
{
    for(j=0;j<c2;j++)
    {
        cout<<second[i][j]<<"\t";
    }
    cout<<"\n";
}

//matrix multiplication

cout<<"Matrix multiplication";
for(i=0;i<r1;i++)
{
    for(j=0;j<c2;j++)
    {
        for(k=0;k<c2;k++)
        {
             result[i][j]= (first[i][j] * second[i][j]) + (first[i][j] * second[j][k]);
        }


    }
}


return 0;
}
