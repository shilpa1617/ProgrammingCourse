#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int array[N];
   for(int i=0;i<N;i++){
    cin>>array[i];
    if(i%2!=0){
        cout<<array[i]<<endl;
    }
   }
    return 0;
}