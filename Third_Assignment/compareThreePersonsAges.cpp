#include <iostream>
using namespace std;

int main()
{
    int ravulaAge, ashwiniAge, priyankaAge;
    cout << "Enter Ravula,Ashwini and Priyanka ages:";
    cin >> ravulaAge >> ashwiniAge >> priyankaAge;
    if ((ravulaAge < ashwiniAge) && (ravulaAge < priyankaAge))
    {
        cout << "Ravula is the younger one" << endl;
    }
    else if ((ashwiniAge < ravulaAge) && (ashwiniAge < priyankaAge))
    {
        cout << "Ashwini is the younger one" << endl;
    }
    else
    {
        cout << "Priyanka is the younger one" << endl;
    }
    return 0;
}