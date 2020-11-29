#include <iostream>

using namespace std;

int main()
{
    float height;

    cout<<"Enter a Height in meters: ";
    cin>>height;

    float incm= height * 100;
    float inInch= incm  / 2.54;
    float inFeet= inInch / 12;

    cout<<"Height is feet is: "<<inFeet;


    return 0;
}
