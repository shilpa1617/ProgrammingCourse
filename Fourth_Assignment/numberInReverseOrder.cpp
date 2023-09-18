#include <iostream>
using namespace std;

int main()
{
    int number, rem = 0;
    cin >> number;

    while (number != 0)
    {
        int value=number%10;
        rem = (rem * 10) + value;
        cout<<value<<" ";
         //cout << rem << endl;
        number = number / 10;
        // cout<<number<<endl;
    }
    // cout <<rem<<endl;

    return 0;
}