#include<iostream>
#include<map>
using namespace std;

int main(){
    string name;
    cin>>name;
    map<char,int> charcount;
    for(int i=0;i<name.size();i++){
        charcount[name[i]]++;
    }
    map<char,int>:: iterator it;
    for(it=charcount.begin();it!=charcount.end();it++){
        if(it->second>1){
            cout<<it->first<<endl;
        }
        // cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}