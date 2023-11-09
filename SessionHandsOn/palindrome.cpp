#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    cin >> text;
    int textSize = text.size();
    bool palindrom=true;
    for (int i = 0, j = textSize - 1; i <= j; i++, j--)
    {
        if (text[i] != text[j])
        {
            palindrom=false;
            break;
        }
    }
    if(palindrom){
    cout<<"Yes,it is palindrome "<<endl;
    }
    else{
        cout<<"No,it is not a palindrome"<<endl;
    }
return 0;
}