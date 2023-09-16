#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    switch(number)
    {
    case 85 ... 100:
        cout<<"A+ grade"<<endl;
        break;
    case 71 ... 84:
        cout<<" A grade"<<endl;
        break;
    case 56 ... 70:
        cout<<"B grade"<<endl;
        break;
    case 41 ... 55:
        cout<<"C grade"<<endl;
        break;
    case 0 ... 40:
        cout<<"D grade"<<endl;
        break;
    default:
        cout<<number<<" is not in range"<<endl;
        break;
    }

    return 0;
}