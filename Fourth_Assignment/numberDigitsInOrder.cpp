#include <iostream>
using namespace std;

int main()
{
    int number, rem = 0;
    cin >> number;

    while (number != 0)
    {
        rem =  number%10;
        cout << rem<<" ";
        number = number / 10;
        // cout<<number<<endl;
    }
    // cout <<rem<<endl;

    return 0;
}