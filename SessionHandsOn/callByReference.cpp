#include<iostream>
using namespace std;

void checking(int *num1,int *num2){
    *num1=10;
    *num2=20;
}

int main(){
    int number1,number2;
    cin>>number1>>number2;
    checking(&number1,&number2);
    cout<<&number1<<" "<<&number2<<endl;
    cout<<number1<<" "<<number2<<endl;;
    return 0;
}