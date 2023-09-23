#include <iostream>
using namespace std;

int main()
{
    int number, rem = 0;
    cin >> number;
    while (number > 0)
    {
        rem = (rem*10) + number % 10;
        number = number / 10;
    }
    cout << rem;
    return 0;
}