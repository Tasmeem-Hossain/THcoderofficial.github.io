#include <iostream>

using namespace std;

int main()
{
    int n,n2;
    cout<<"please enter the population density(per square km: ";
    cin>>n;
    cout<<"please enter the infected rate (for last 1 month): ";
    cin>>n2;


    if(n<=100 && n2<50)
    {
        cout<<"no need to buy vaccine";

        if(n<=100 && n2>50)
        {
            cout<<"Number of vaccine have to be ensure by each country(of total population): "<<"Country will go immediately lockdown and buy vaccine";
        }
    }

else if((n>100 && n<500) && n2<50 )
{
    cout<<"Number of vaccine have to be ensure by each country(of total population): "<<"30%";
}

else if((n>500 && n<1000) && n2<50)
{
    cout<<"Number of vaccine have to be ensure by each country(of total population): "<<"40%";
}
else
{
    cout<<"Number of vaccine have to be ensure by each country(of total population): "<<"100%";
}


return 0;

}
