#include<iostream>
using namespace std;

struct  employee{
    int id;
    string name;
    double salary;
    string role;
};

int main(){
    struct employee Sampath={1,"Sampath",20.00," C++ Developer"};
    struct employee Shilpa={2,"Shilu",10.00,"Java Developer"};
    cout<<Sampath.id<<endl;
    cout<<Shilpa.id<<endl;
    cout<<Sampath.role<<endl;
    return  0;
}