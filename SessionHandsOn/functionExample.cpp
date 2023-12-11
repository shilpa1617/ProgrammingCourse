#include<iostream>
using namespace std;

//returnType  functionName(){
 //body
//}

// int addition(int a,int b=100){
//     int sum=a+b;
//     //cout<<sum<<endl;
//     return sum;
// }
// int sub(){
//     int a=100;
//     int b=200;
//     int sum=a-b;
//     //cout<<sum<<endl;
//     return sum;
// }
// int main(){
//     int value=addition(200);
//     int value2=sub();
//     cout<<value<<endl;
//     cout<<value2<<endl;
//     return 0;
void myFunction(string country = "Norway") {
  cout << country << "\n";
}

int main() {
  myFunction("Sweden");
  myFunction("India");
  myFunction();
  myFunction("USA");
  myFunction();
  myFunction();
  myFunction();
  return 0;
}

