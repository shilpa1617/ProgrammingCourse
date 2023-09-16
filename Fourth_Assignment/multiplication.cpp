#include<iostream>
using namespace std;

int main(){
    int i,number;
    cin>>number;
    for(i=0;i<=10;i++){
        int result=number*i;
            cout<<number<<" * "<<i<<" = "<<result<<endl;
            if(result%2==0){
                cout<<result<<" is a even number"<<endl;
            }
            else{
                cout<<result<<" is a odd number"<<endl;
            }
    
        }
    return 0;
}