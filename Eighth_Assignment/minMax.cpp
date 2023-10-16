#include <iostream>
using namespace std;

int main()
{
    int N, num;
    cin >> N;
    vector<int> numbers;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        numbers.push_back(num);
    }
    int Min = numbers[0];
    int Max = numbers[0];
    for (int i = 0; i < N; i++)
    {
        if (numbers[i] > Max)
        {
            Max = numbers[i];
        }
        if (numbers[i] < Min)
        {
            Min = numbers[i];
        }
    }
    cout<<Min<<endl;
    cout<<Max<<endl;

    return 0;
}