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
     for(int i=0;i<size;i++){
        if(i%2==0){
        cout<<numbers[i]<<endl;;
     }
}



    return 0;
}