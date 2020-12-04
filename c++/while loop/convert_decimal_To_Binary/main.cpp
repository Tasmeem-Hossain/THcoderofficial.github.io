#include <iostream>

using namespace std;

int main()
{
    int input,binary=0,remainder=0,place=1;
    cout<<"Enter a Decimal Number: ";
    cin>>input;
    cout<<"Decimal: "<<input<<endl;
    while(input)
    {
        remainder= input % 2;
        input = input / 2 ;
        binary=binary + (remainder * place);
        place = place * 10;

    }
    cout<<"Binary: "<<binary;

    return 0;
}
