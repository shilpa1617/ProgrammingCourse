#include<iostream>
using namespace std;

int main(){
    char vowel;
    cin>>vowel;
    switch (vowel)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<"entered "<<vowel<<" vowel"<<endl;
        break;
    default:
        cout<<"You have  not entered vowel "<<endl;
        break;
    }
    return 0;
}