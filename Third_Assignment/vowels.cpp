#include<iostream>
using namespace std;
 int main(){
char vowel;
    cin>>vowel;
    switch (vowel)
    {
    case 'a':
        cout<<" vowel a entered"<<endl;
        break;
    case 'e':
        cout<<" vowel e entered"<<endl;
        break;
    case 'i':
        cout<<" vowel i entered"<<endl; 
        break;
    case 'o':
        cout<<" vowel o entered"<<endl; 
        break;
    case 'u':
        cout<<" vowel u entered"<<endl; 
        break;
    default:
        cout<<"The entered character is not vowel"<<endl;
        break;
    }
    return 0;
 }



