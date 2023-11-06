#include<iostream>
#include<map>
using namespace std;

int main(){
    string name;
    cin>>name;
    map<char,int> charCount;
    for(int i=0;i<name.size();i++){
        charCount[name[i]]++;
    }
    map<char,int>::iterator it;
    for(it =charCount.begin(); it!=charCount.end(); it++){
        cout<<it->first<< " occured "<<it->second<<" times" <<endl;
    }

return 0;
}