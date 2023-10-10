#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(70);
    cout<<numbers[3]<<endl;
    numbers[3]=50;
    cout<<numbers[3]<<endl;

    return 0;
}