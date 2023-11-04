#include <iostream>
using namespace std;

int main()
{
    string name = "shilpa";
    string *ptr = &name;
    cout << &name << endl;
    cout << " The address of the char :" << ptr << endl;
    cout << " The value of the char :" << *ptr << endl;
    return 0;
}