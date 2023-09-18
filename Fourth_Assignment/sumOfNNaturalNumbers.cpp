#include<iostream>
using namespace std;

int main(){
    int i,number,sum=0,result;
    cin>>number;
    
    for(i=1;i<=number;i++){
        sum=sum+i;
        result=2*number+sum;
    }
    cout<<"Sum of 1 to "<<number<<":"<<sum<<endl;
    cout<<result<<endl;
    return 0;
}