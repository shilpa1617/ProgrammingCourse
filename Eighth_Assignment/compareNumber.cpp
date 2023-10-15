#include <iostream>
using namespace std;

int main()
{
    int N,num;
    cin >> N;
    vector<int> numbers;
    for (int i = 0; i < N; i++)
    {
        cin>>num;
        numbers.push_back(num);
    }
    int anotherNumber;
    cin >> anotherNumber;
    bool found = false;
    for (int n : numbers)
    {
        if (n == anotherNumber)
        {
            found = true;
            break;
        }
    }
    if (found==true)
    {
        cout << anotherNumber << " is there in the array " << endl;
    }
    else
    {
        cout << anotherNumber << " is not there in the array " << endl;
    }
    return 0;
}