#include <iostream>

using namespace std;

int main()
{
    int input;
    cout<<"Enter a number: ";
    cin>>input;

    if(input>=85 && input<=100)
    {
        cout<<" A ";
    }

    if(input>=80 && input<85)
    {
        cout<<" A- ";
    }

    if(input>=75 && input<80)
    {
        cout<<" B+ ";
    }

    if(input>=70 && input<75)
    {
        cout<<" B ";
    }

    if(input>=65 && input<70)
    {
        cout<<" B- ";
    }

    if(input>=60 && input<65)
    {
        cout<<" C+ ";
    }

    if(input>=55 && input<60)
    {
        cout<<" c ";
    }

    if(input>=50 && input<55)
    {
        cout<<" C- ";
    }

    if(input>=45 && input<50)
    {
        cout<<" D+ ";
    }

    if(input>=40 && input<45)
    {
        cout<<" D ";
    }

    if(input>=0 && input<40)
    {
        cout<<" F ";
    }



    return 0;
}
