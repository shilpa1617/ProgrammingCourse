#include <iostream>
using namespace std;

int main()
{
    int i, number, sum = 0,sum2=0,evenCount=0,oddCount=0;
    cin >> number;
    for (i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
            evenCount++;
        }
    }
    cout << "Even numbers sum : " << sum << endl;
    
    for (i = 0; i <= number; i++)
    {
        if (i % 2 != 0)
        {
            sum2= sum2 + i;
            oddCount++;
        }
    }
    cout << "Odd numbers sum : " << sum2 << endl;
    cout<<"Even numbers from 1 to "<<number<<":"<<evenCount<<endl;
    cout<<"Odd numbers from 1 to "<<number<<":"<<oddCount<<endl;

    return 0;
}