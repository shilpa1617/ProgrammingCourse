#include<iostream>
#include<string>
using namespace std;

int main(){
    string alphabets[5];
    string number;
    for(int i=0;i<=4;i++){
        cin>>number;
        alphabets[4-i]=number;
    }
    for(int i=0;i<=4;i++){
        cout<<alphabets[i]<<endl;
    }

}