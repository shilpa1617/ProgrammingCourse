#include<iostream>
using namespace std;

int sum(int number1,int number2){
    int result=number1+number2;
    return result;
}
int main(){
    int sumResult=sum(20,30);
    cout<<"Sum is :"<<sumResult<<endl;
return 0;
}