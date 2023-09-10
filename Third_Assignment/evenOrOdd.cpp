#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;

    if(number%2==0){
        cout<<number<<" is even number"<<endl;
    }
    else{
        cout<<number<<" is odd number"<<endl;
    }
    return 0;
}