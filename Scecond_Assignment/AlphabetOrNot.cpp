#include<iostream>
using namespace std;

int main(){
    char Alphabet;
    cout<<"Enter an Alphabet:";
    cin>>Alphabet;
    if(Alphabet>='a' && Alphabet<='z'){
        cout<<"You've entered a small alphabet"<<endl;
    }
    else{
        cout<<"You've not entered a small alphabet"<<endl;
    }

    return 0;
}