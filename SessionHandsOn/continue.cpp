#include <iostream>
using namespace std;

//  Write a program to print the numbers from 147 to 157 but don’t print the 150.

int main()
{
    int number;
    for (number = 147; number <= 157; number++)
    {
        if (number == 150)
        {
            continue;
        }
        cout << number << endl;
    }
    return 0;
}