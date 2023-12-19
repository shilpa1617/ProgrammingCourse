#include<iostream>
using namespace std;

int main(){
    int number=12;
    int *ptr=&number;

    cout<<number<<" "<<"address :"<<ptr<<" Number "<<*ptr<<endl;
    *ptr=17;
    cout<<number<<" "<<"address :"<<ptr<<" Number "<<*ptr<<endl;

    void *pointer;
    int variable=10;
    pointer=&variable; 

    cout<<pointer<<endl;
    //cout<<*pointer<<endl;

    return 0;
}