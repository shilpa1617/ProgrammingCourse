#include<iostream>
using namespace std;

int main(){
    char alphabet;
    cin>>alphabet;
    if(alphabet>='a' && alphabet<='z'){
        cout<<"yes,it is small number"<<endl;
    }
    else{
        cout<<"Sorry"<<endl;
    }
    return 0;
}