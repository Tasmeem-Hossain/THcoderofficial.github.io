#include <iostream>

using namespace std;

int main()
{
    int hours;
    cout<<"Enter Hour: ";
    cin>>hours;

    int days= hours / 24;
    float hours2= hours % 24;

    int week= days / 7;

    cout<<"Weeks: "<<week<<endl;
    cout<<"Days remaining: "<<days<<endl;
    cout<<"Hours remaining: "<<hours2<<endl;
    return 0;
}
