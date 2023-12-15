#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int check;
    cin >> check;
    bool flag = false;
    int number;
    for (int i = 0; i < N; i++)
    {
        cin>>number;
        if (number == check)
        {
            flag = true;
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