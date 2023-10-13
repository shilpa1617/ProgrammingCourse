#include<iostream>
using namespace std;

int main(){
    int N,num;
    cin>>N;
    vector<int> numbers;
    for(int i=0;i<N;i++){
        cin>>num;
        numbers.push_back(num);
    }
    int sum=0;
    for(int i=0;i<N;i++){
        sum=sum+numbers[i];
    }
    cout<<"The sum of numbers in vector :"<<sum<<endl;

    return 0;
}