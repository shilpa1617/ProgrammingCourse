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
        int minimun = 0;
        for (int i = 0; i < N; i++)
        {
            if (numbers[i] < minimun)
            {
                minimun=numbers[i];
            }
        }
        cout << minimun << endl;

    return 0;
}