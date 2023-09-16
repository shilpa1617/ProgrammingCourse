#include<iostream>
using namespace std;

int main()
{
    int i, number;
    cin >> number;
    for (i = 1; i <= 10; i++)
    {
        int result = number * i;
       cout<<number<<"*"<<i<<"="<<result<<( (result%2==0)?" ,is even number":" ,is odd number")<<endl;
    }
    return 0;
}