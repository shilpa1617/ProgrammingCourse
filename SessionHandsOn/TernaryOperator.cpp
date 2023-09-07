#include<iostream>
using namespace std;

int main(){
    int person1Age,person2Age;
    cout<<"Enter two person ages:";
    cin>>person1Age>>person2Age;
    int result=(person1Age>person2Age)?person1Age:person2Age;
    cout<<result<<endl;
    return 0;
}