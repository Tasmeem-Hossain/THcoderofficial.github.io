#include <iostream>

using namespace std;

int main()
{
    int year,week,day;

 cout<<"Enter total number of days:";
 cin >>day;

 year=day/365;
 //a=d%365;
 week=(day%365)/7;
 day=week%7;

 cout<<"\nYears: "<<year<< endl<< "Weeks: "<<week<<endl <<"Days: "<<day;

    return 0;
}
