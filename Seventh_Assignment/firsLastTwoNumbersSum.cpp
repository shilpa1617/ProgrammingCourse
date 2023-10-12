#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int numbers[N];

    if(N>4){
    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
    }
    cout<<numbers[0]+numbers[1]+numbers[N-1]+numbers[N-2]<<endl;
    }
    else{
        cout<<"Array Size is less than four "<<endl;
    }
    return 0;
}