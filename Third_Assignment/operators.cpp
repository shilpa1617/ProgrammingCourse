#include<iostream>
using namespace std;

int main(){
    int number1,number2,number3;
    char op;
    cin>>number1>>number2>>number3;
    cin>>op;
    if(op=='+'){
        cout<<"The addition is:"<<number1+number2+number3<<endl;
    }
    else if(op=='-'){
        cout<<"The subtraction is:"<<number1-number2-number3<<endl;
    }
    else if(op=='*'){
        cout<<"The multiplication is:"<<number1*number2*number3<<endl;
    }
    else if(op=='/'){
        cout<<"The division is:"<<(number1+number2)/number3<<endl;
    }
    else{
        cout<<"Please enter validate character"<<endl;
    }
    


    return 0;
}