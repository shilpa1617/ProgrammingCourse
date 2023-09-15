#include<iostream>
using namespace std;

int main(){
    int i=1,number;
    cin>>number;
    while(i<=number){
        if(i%2!=0)
         cout<<"Odd number is :"<<i<<endl;
        i++; 
    }
    return 0;
}