#include<iostream>
using namespace std;

int check(int* number1,int* number2){
    *number1=100;
    *number2=200;
    cout<<*number1<<endl;
    cout<<*number2<<endl;
    return 0;
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    check(&num1,&num2);
    cout<<&num1<< " "<<&num2<<endl;
    cout<<num1<< " "<<num2<<endl;
    return 0;
}