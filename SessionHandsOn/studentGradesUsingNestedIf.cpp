#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter marks between 1-100:";
    cin>>marks;
    if(marks>0 && marks<=100){
        if (marks>85)
        {
            cout<<"Grade A+"<<endl;
        }
        else if (marks>71)
        {
            cout<<"Grade A"<<endl;
        }
        else if (marks>56)
        {
            cout<<"Grade B"<<endl;
        }
        else if (marks>41)
        {
            cout<<"Grade C"<<endl;
        }
        else{
            cout<<"Grade D"<<endl;
        }
    }
    else{
        cout<<"The given number is not in range"<<endl;
    }
    return 0;
}