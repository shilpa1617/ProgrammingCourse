#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int array[N];
    for(int i=0;i<N;i++){
        cin>>array[i];
    }
    int middleNumber=N/2-1;
    cout<<array[middleNumber]<<endl;
    return 0;
}