#include<iostream>
using namespace std;

long long  int factorial(long long int a){
    if(a==1){
        return 1;
    }
    else{
        return a*factorial(a-1);
    }
}
int main(){
    long long int number;
    cin>>number;
    long long int sum=factorial(number);
    cout<<sum<<endl;
    return 0;
}