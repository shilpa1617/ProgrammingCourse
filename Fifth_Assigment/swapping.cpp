#include<iostream>
using namespace std;

int main(){
    int number1,number2,temp;
    cin>>number1;
    cin>>number2;
    cout<<"before swapping :"<<number1<< " " <<number2<<endl;
    temp=number1;
    number1=number2;
    number2=temp;
    cout<<"after swapping :"<<number1<<" "<<number2<<endl;

    return 0;
}