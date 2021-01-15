#include <iostream>
using namespace std;
bool isPerfect(int no)
{
    int i = 0;
    int sum = 0;
    while (i++ < no)
    {
        if (no % i == 0 && i < no)
        {
            sum += i;
        }
    }
    return sum == no;
}
int main()
{
    float first;
    float second;
    cout << "Enter the first number of the range : " << endl;
    cin >> first;
    cout << "Enter the second number of the range : " <<endl;
    cin >> second;
    cout << "Perfect numbers between " << first << " and " <<second << " :" << endl;
    for (int i = first; i <= second; i++)
    {
        if (isPerfect(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}
