#include <iostream>

using namespace std;

int main()
{
    int row,coloum,j;
    double mean_value,mean_value1,sum=0,sum1=0;

    cout<<"please enter the number of cities: ";
    cin>>row ;
    cout<<"please enter the number of days: ";
    cin>> coloum;

    int first[row][coloum]; //array declaration
    ///city1
    cout<<"city 1 please enter the temperature for 4 days: "<<endl;


    for(j=1; j<=coloum; j++)
    {
        cout<<"Day "<<"["<<j<<"]"<<"methane unit in ton :";
        cin>>first[1][j];          //taking input for city 1
    }
    for(j=1; j<=coloum; j++)
    {
        sum = sum + first[1][j]; // city 1 subtraction
    }
    mean_value = sum / coloum; // city 1 average value
    cout<<endl;
    cout<<"city 1, Average methane is: "<<mean_value<<endl;
    cout<<endl;
     if(100 <= mean_value)
    {
        cout<< "City 1 is not a liveable city"<< endl;
    }
    else if (50 < mean_value )
    {
        cout<<"City 1 is in Danger"<< endl;
    }
    else if(20< mean_value)
    {
        cout<< "Methane emission must be reduced"<< endl;
    }
    else if (0< mean_value)
    {
        cout<< "Methane emission is in tolerate"<< endl;
    }
    else
    {
        cout<< "Invalid number ";
    }
    ///city 2
    cout<<endl;
    cout<<"city 2 please enter the temperature for 4 days: "<<endl;
    cout<<endl;

    for(j=1; j<=coloum; j++)
    {
        cout<<"Day "<<"["<<j<<"]"<<"methane unit in ton :";
        cin>>first[2][j];  //city 2 taking input
    }

    for(j=1; j<=coloum; j++)
    {
        sum1 = sum1 + first[2][j]; //city 2 subtraction
    }
    mean_value1 = sum1 / coloum;  //city 2 average value
    cout<<endl;
    cout<<"city 2, Average methane is: "<<mean_value1<<endl;
    cout<<endl;
    if(50 < mean_value1 )
    {
        cout<<"City2 is in Danger"<<endl;
    }
    else if(100 <= mean_value1)
    {
        cout<< "City2 is not a liveable city"<< endl;
    }
    else  if(20 < mean_value1 )
    {
        cout<< "Methane emission must be reduced"<< endl;
    }
    else  if (0 < mean_value1 )
    {
        cout<< "Methane emission is in tolerate"<<endl;
    }
    else
    {
        cout<< "Invalid number ";
    }

    return 0;
}
