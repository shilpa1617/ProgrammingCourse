#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int array[N];
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }
    int check;
    cin >> check;
    bool flag = true;
    for (int i = 0; i < N; i++)
    {
        if (array[i] == check)
        {
            flag = true;
            break;
        }
        else
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << "Found the element" << endl;
    }
    else
    {
        cout << "Not in the array" << endl;
    }

    return 0;
}