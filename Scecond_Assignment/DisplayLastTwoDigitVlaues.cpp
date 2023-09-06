#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter an number:";
    cin>>number;
    if(number<100){
        cout<<"The number should be greater or equals to three"<<endl;
        return 1;
    }
    int last_Digit=(number%10);
    cout<<"The last digit is:"<<last_Digit<<endl;
    int Second_Last_Digit=(number/10)%10;
    cout<<"The second last digit is:"<<Second_Last_Digit<<endl;
    
    return 0;
}