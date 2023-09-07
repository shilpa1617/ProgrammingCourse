#include<iostream>
using namespace std;

int main(){
    int Person1Age,Person2Age;
    cout<<"Enter two person ages:";
    cin>>Person1Age>>Person2Age;
    int result=(Person1Age>Person2Age)?Person1Age:Person2Age;
    cout<<result<<endl;
    return 0;
}