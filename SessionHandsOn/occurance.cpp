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
    
    for (int i = 0; i < N; i++)
    {
        int count =0;
        for(int j=0;j<N;j++){
            if(numbers[i]==numbers[j]){
                count++;
            }
        }
        cout<<numbers[i]<< "  appeared "<<count<<" times "<<endl;
    }

    return 0;
}