#include<iostream>
using namespace std;

int myId=1617;

void scope(){
    int myAge=24;
    cout<<myAge<<endl;
    cout<<"value of this scope function is : "<<myId<<endl;
    }
int main(){
    int number=1280;
    cout<<number<<endl;
    cout<<"Value of this main function is : "<<myId<<endl;
    scope();
    return 0;
    
}
