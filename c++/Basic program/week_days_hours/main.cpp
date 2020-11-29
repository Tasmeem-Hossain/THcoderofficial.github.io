#include <iostream>

using namespace std;

int main()
{
    int input,weeks,days,hours;
    cout<<"Input Hour: ";
    cin>>input;

    weeks=input/168;
    days=(input%168)/24;
    hours=(input%168)%24;
    cout<<"Weeks: "<<weeks<<endl<<"days: "<<days<<endl<<"hours: "<<hours;

    return 0;
}
