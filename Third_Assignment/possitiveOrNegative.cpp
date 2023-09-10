#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    if(number>0){
        cout<<number<<" is positive number "<<endl;
    }
    else if(number<0){
         cout<<number<<" is negative number "<<endl;
    }
    else{
        cout<<"Zero"<<endl;
    }

    return 0;
}