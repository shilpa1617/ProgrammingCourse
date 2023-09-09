#include<iostream>
using namespace std;

int main(){
    char smallAlphabet;
    cin>>smallAlphabet;

    (smallAlphabet>='a') && (smallAlphabet<='z')
    ?cout<<"You've entered a small alphabet"
    :cout<<"You've  not entered a small alphabet"<<endl;

    return 0;
}