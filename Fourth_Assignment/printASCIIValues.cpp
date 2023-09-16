#include <iostream>
using namespace std;

int main()
{
    char alphabet;
    for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
    {
        cout << alphabet << " = " << int(alphabet) << endl;
    }
    cout<<"alphabets from z to a"<<endl;
    for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
    {
        cout << alphabet << " = " << int(alphabet) << endl;
    }
    return 0;
}