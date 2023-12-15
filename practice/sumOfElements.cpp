#include<iostream>
using namespace std;

int main(){
   int size;
   cin>>size;
   int array[size];
   for(int i=0;i<size;i++){
      cin>>array[i];
   }
  cout<<array[0]+array[1]+array[size-1]+array[size-2]<<endl;
   return 0;
}