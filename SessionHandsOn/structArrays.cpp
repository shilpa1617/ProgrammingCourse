#include <iostream>
using namespace std;

struct student
{
    int id;
    string name;
    float cgpa;
    string favSub;
};
int main()
{
    int size;
    cin >> size;
    struct student students[size];
    for (int i = 0; i < size; i++)
    {
        cin >> students[i].id;
        cin>>students[i].name;
        cin >> students[i].cgpa;
        cin >> students[i].favSub;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Student " << i + 1 <<endl;
        cout<<"ID : "<<students[i].id <<endl;
        cout<<"Name : "<<students[i].name<<endl;
        cout<<"CGPA : "<<students[i].cgpa<<endl;
        cout<<"Fav Subject : "<<students[i].favSub << endl;
     }
    return 0;
}