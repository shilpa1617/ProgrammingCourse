#include<iostream>
using namespace std;

int main(){
    int number1,number2;
    cin>>number1>>number2;
    if(number1<number2){
        cout<<"message up"<<endl;
    }
    else if (number1>number2)
    {
        cout<<"message down"<<endl;
    }
    else{
        cout<<"Both are equal"<<endl;
    }


    return 0;
}