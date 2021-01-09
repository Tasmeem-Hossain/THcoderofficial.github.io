#include <iostream>
using namespace std;
int main()
{
    //string str = "DDAC";
    char checkD = 'D';
    int countD = 0;
    int strcount = 0;
    char str[100];
    cout << "Enter a string: ";
    cin.get(str, 100);
    for (int i = 0; str[i]; i++) // This means if the conduction for the for statement get a null ’\0’ it will terminate the source
    {
        strcount=strcount+1;
    }
    for (int i = 0; i < strcount; i++)
    {
        if (str[i] == checkD)
        {
            countD= countD+1;
        }
    }
    cout << "Number of D: " << countD<<endl;
    cout <<"String size :"<<strcount<<endl;
    return 0;
}
