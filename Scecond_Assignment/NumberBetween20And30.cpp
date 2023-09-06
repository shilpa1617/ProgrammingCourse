#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter an number :";
    cin>>number;
    if(number>20 && number<30){
        cout<<"Yes,The entered number is between 20 and 30"<<endl;
    }
    else{
        cout<<"No.The entered number is not between 20 and 30"<<endl;
    }  

    return 0;
}