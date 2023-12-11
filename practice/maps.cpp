#include<iostream>
#include<map>
using namespace std;

int main(){
    string name;
    cin>>name;
    map<char,int> count;

for(int i=0;i<name.length();i++){
    count[name[i]]++;
}
map<char,int>::iterator it;
for(it=count.begin();it!=count.end();it++){
 cout<<it->first<<" occurred "<<it->second<<" times "<<endl;
}
    return 0;
}