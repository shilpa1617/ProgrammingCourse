#include<iostream>
using namespace std;

int main(){
    int person1Age,person2Age,person3Age;
    cin>>person1Age>>person2Age>>person3Age;

    if ((person1Age >= person2Age && person1Age <= person3Age) || (person1Age <= person2Age && person1Age >= person3Age)) {
        cout << "Person 1 is the middle person " <<person1Age <<endl;
    }
   else if ((person2Age >= person1Age && person2Age <= person3Age) || (person2Age <= person1Age && person2Age >= person3Age)) {
        cout << "Person 2 is the middle person " << person2Age <<endl;
    }
    else {
        cout << "Person 3 is the middle person" <<person3Age <<endl;
    }
    return 0;
}