#include<iostream>
using namespace std;

int main(){
    string firstName,lastName;
    cin>>firstName>>lastName;
    cout<<firstName+lastName<< " "<<firstName.append(lastName)<<endl;
    return 0;
}