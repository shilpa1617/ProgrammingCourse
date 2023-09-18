#include <iostream>
using namespace std;

int main()
{
    int i, number;
    cin >> number;
    for (i = 2; i <= number / 2; i++)
    {
        cout << i << " ";
    }
    return 0;
}