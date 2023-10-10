#include<iostream>
#include<vector>
using namespace std;

int main(){
     int size;
     cin>>size;
     vector<int> numbers(size);
     for(int i=0;i<size;i++){
        cin>>numbers[i];
     }
     cout<<"The first index value :"<<numbers[0]<<endl;
     cout<<"The second index value :"<<numbers[size-1]<<endl;

     return 0;
}
