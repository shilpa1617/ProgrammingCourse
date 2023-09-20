#include <iostream>
using namespace std;

/*
    Write a program to check the given number is in range from 10-20.
    input: 15
    Output : 15 number is in range of 10-20
    input : 25
    Output :
*/

int main()
{
    int number, givenNumber;
    cin >> givenNumber;
    for (number = 10; number <= 20; number++)
    {
        if (number == givenNumber)
        {
            cout << number << " number is in range of 10-20" << endl;
            break;
        }
    }

    return 0;
}