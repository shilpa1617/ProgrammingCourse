#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    cin >> text;
    int textSize = text.size();
    int i=0;
    int j=textSize-1;
    bool palindrom=true;
    while(i<=j)
    {
        if (text[i] != text[j])
        {
            palindrom=false;
            break;
        }
        i++;
        j--;
    }
    
    if(palindrom){
    cout<<"Yes,it is palindrome "<<endl;
    }
    else{
        cout<<"No,it is not a palindrome"<<endl;
    }
return 0;
}