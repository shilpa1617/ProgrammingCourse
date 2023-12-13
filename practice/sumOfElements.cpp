#include<iostream>
using namespace std;
int main(){
     int N;
     cin>>N;
     int numbers[N];

     for(int i=0;i<N;i++){
        cin>>numbers[i];
     }
    cout<<numbers[0]+numbers[1]+numbers[N-1]+numbers[N-2]<<endl;
    return 0;
}