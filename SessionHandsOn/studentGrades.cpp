#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Please enter student marks:";
    cin>>marks;

    if (marks>=85 && marks<=100)
    {
        cout<<"The grade is A+"<<endl;
    }
    else if (marks>=71 && marks<=84)
    {
       cout<<"The grade is A"<<endl;
    }
    else if (marks>=56 && marks<=70)
    {
       cout<<"The grade is B"<<endl;
    }
    else if (marks>=41 && marks<=55)
    {
       cout<<"The grade is C"<<endl;
    }
    else{
        cout<<"The grade is D"<<endl;
    }


    return 0;
}