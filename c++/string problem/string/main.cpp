#include <iostream>
#include<string>
using namespace std;

void display(char s[],int)
{
    cout<<"charecter: "<<s<<endl;
}
void result(string y,string z)
{
    for(int i=y.size();i>=0;i--)
    {
        z=z+y[i];
    }
    cout<<"string: "<<z<<endl;
}

int main()
{
    /*string s1= "Tanim  Hassan";
    string s2= "world";
    string s3;
    int lenth;
    //string copy
    s3= s2;
    cout<<s3<<endl;
    //string concatenate
    s3=s1 + s2;
    cout<< s3 <<endl;
    //string leanth
    lenth= s1.size();
    cout<<lenth<<endl;*/



    /* string input;
     cout<<"Enter a name: ";
    getline(cin,input);
    int lenth = input.size();
    cout<<lenth;*/

    char str[100];

    string str1;
    cout<<"Enter a name: "<<endl;
    getline(cin,str1);
    cout<<"Enter a name: "<<endl;
    cin.get(str,100);
    display(str,100);
    result(str1,str);

    return 0;
}

