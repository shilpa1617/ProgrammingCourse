#include<iostream>
using namespace std;

int main(){
    int number1,numnber2,number3;
    cin>>number1>>numnber2>>number3;
    char ch;
    cin>>ch;
    switch (ch)
    {
    case '+':
        cout<<"The addition is "<<number1+numnber2+number3<<endl;
        break;
    case '-':
        cout<<"The subtraction is "<<number1-numnber2-number3<<endl;
        break;
    case '*':
        cout<<"The multiplication is "<<number1*numnber2*number3<<endl;
        break;
    case '/':
        cout<<"The division is "<<(number1+numnber2)/number3<<endl;
        break;
    default:
        cout<<"Please enter valid character"<<endl;
        break;
    }



    return 0;
}