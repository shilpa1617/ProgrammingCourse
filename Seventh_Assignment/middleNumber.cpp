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

    int firstNumber = 0;
    int lastNumber = N - 1;
    int middleNumber = (firstNumber + lastNumber) / 2;

    cout << "Middle element: " << numbers[middleNumber] << endl;
    return 0;
}