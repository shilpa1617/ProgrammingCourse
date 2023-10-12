#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int numbers[size];

    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
        if (i % 2 == 1)
        {
            cout << numbers[i] << endl;
        }
    }
    return 0;
}