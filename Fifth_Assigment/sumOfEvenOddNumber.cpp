#include<iostream>
using namespace std;

int main(){
    int sum=0,count=0,sum1=0,count1=0;
    for(int number=1;number<=100;number++){
        if(number%2==0){
            sum+=number;
            count++;
        }
    }
    cout<<sum<<endl;
    cout<<count<<endl;
    cout<<"The average of even numbers 1-100: "<<(sum/count)<<endl;
    for(int number=1;number<=100;number++){
        if(number%2!=0){
            sum1+=number;
            count1++;
        }
    }
    cout<<sum1<<endl;
    cout<<count1<<endl;
    cout<<"The average of odd numbers 1-100: "<<(sum1/count1)<<endl;
    return 0;
}