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
        if (num <= 50)
        {
            numbers.push_back(num);
        }
    }
    //int count = 0;
    int occurance[51] = {0};
    for (int i = 0; i < N; i++)
    {
        occurance[numbers[i]]++;
    }
    for(int i=0;i<N;i++){
        cout<<numbers[i]<< "  appeared "<<occurance[numbers[i]]<<" times "<<endl;
    }
    

    return 0;
}