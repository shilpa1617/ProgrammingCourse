#include<iostream>
using namespace std;

int main(){
    int number1,number2;
    cout<<"Enter Two numbers: ";
    cin>>number1>>number2;
    int result=(number1>number2)?number1:number2;
    cout<<result<<endl;
    
    return 0;
}