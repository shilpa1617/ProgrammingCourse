#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int numbers[N];
    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
    }
    int anotherNumber;
    cin >> anotherNumber;
    bool found = false;
    for (int i = 0; i < N; i++)
    {
        if (numbers[i] == anotherNumber)
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        cout << anotherNumber << " is there in the array " << endl;
    }
    else
    {
        cout << anotherNumber << " is not there in the array " << endl;
    }
    return 0;
}