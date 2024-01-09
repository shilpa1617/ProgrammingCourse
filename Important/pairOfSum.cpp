#include<iostream>
using namespace std;
int main(){
  int target;
  cin>>target;
  int size;
  cin>>size;
  int array[size];
  for(int i=0;i<size;i++){
    cin>>array[i];
  }
  for(int i=0;i<size-1;i++){
    for(int j=i;j<size;j++){
     if(array[i]+array[j]==target){
      cout<<array[i]<<" "<<array[j]<<endl;
       }
    }
  }
  return 0;
}