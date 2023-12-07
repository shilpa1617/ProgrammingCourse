#include<iostream>
using namespace std;

struct student{
    int id;
    string name;
    float cgpa;
};

int main(){
     student sampath={1,"Sampath",6.0};
     student srujan={2,"Srujan",9.0};
    cout<<sampath.name<<endl;
    cout<<srujan.cgpa<<endl;
    return 0;
}