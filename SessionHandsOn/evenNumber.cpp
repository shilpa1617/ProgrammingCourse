#include<iostream>
using namespace std;

int main(){
    int i,n;
    cin>>n;
    for(i=0;i<=n;i++){
        if(i%2==0){
            cout<<"The even number is:"<<i<<endl;
        }
    }
    return 0;
}