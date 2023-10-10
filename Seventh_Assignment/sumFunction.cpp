#include<iostream>
using namespace std;

int sum(int number1,int number2){
    int result=number1+number2;
    return result;
}
int main(){
    int  value1,value2;
    cin>>value1>>value2;
    int sumResult=sum(value1,value2);
    cout<<"Sum is :"<<sumResult<<endl;
return 0;
}