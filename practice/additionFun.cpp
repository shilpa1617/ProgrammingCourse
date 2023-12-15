#include<iostream>
using namespace std;

int addition(int a,int b){
    int sum=a+b;
    return sum;
}


int main(){
    int a,b;
    cin>>a>>b;
    int add=addition(a,b);
    cout<<" The sum is: "<<add<<endl;
    return 0;
}