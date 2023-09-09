#include<iostream>
using namespace std;

int main()
{
    int marks;
    cin>>marks;

    if(marks>70){
    cout<<"Marks are above 70"<<endl;
        if ((marks>80 && marks<100))
        {
            cout<<"Marks are between the range 80-100"<<endl;
        }
        else if(marks>70 && marks<80)
        {
            cout<<"Marks are between the range 70-80"<<endl;
        }
    }
    if (marks<70){
    cout<<"Marks are below 70"<<endl;
       if ((marks>50 && marks<70))
        {
            cout<<"Marks are between the range 50-70"<<endl;
        }
        else if(marks>40 && marks<50)
        {
            cout<<"Marks are between the range 40-50"<<endl;
        }
        else if(marks<40)
        {
            cout<<"Fail"<<endl;
        }
    }
    return 0;
    
}
