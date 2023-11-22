#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    char alphabet;
    cin>>alphabet;
    int asciiValue=int(alphabet);
    cout<<asciiValue<<endl;
    if(number==asciiValue){
        cout<<"Yes,it is"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}