#include<iostream>
using namespace std;

int main(){
    int a=10;
    cout<<++a<<endl; //11
    cout<<a++<<endl; //11
    cout<<(++a)+(a++)<<endl; //26
    cout<<a<<endl; //14

    int b=20;
    cout<<--b<<endl;//19
    cout<<b--<<endl;//19
    cout<<(--b)-(b--)<<endl;//0
    cout<<b<<endl; //16
    return 0;
}