#include <iostream>
using namespace std;

int main()
{
    string name = "shilpa";
    string *ptr = &name;
    cout << &name << endl;
    cout << " The address of the char :" << ptr << endl;
    cout << " The value of the char :" << *ptr << endl;
    
    void *ptrr;
    int number=100;
    ptrr=&number;
    cout<<ptrr<<endl;
    //cout<<*ptrr<<endl; prints error
    string na="Shilpra";
    ptrr=&na;
    cout<<ptrr<<endl;
    return 0;
}