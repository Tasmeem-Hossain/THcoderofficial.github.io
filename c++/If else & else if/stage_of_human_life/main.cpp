#include <iostream>

using namespace std;

int main()
{

    int age;
    cout<<"Enter age: ";
    cin>>age;

    if(age<3)
    {
        cout<<"Infancy"<<endl;
    }
    else if(age>=3 && age<12)
    {
        cout<<"Childhood"<<endl;
    }
   else if(age>=12 && age<20)
    {
        cout<<"Adolescence"<<endl;
    }
  else if(age>=20 && age<40)
  {
      cout<<"Young Adulthood"<<endl;
  }
else if(age>=40 && age<65)
{
    cout<<"Mature adulthood"<<endl;
}
else
{
    cout<<"Late adulthood";
}


    return 0;
}
