#include <iostream>
using namespace std;

int main()
{
    string name;
    cin >> name;
    for (int j = 0; j < name.size(); j++)
    {
        int count = 0;
        for (int i = 0; i < name.size(); i++)
        {
            if (name[i]==name[j])
            {
                count++;
            }
        }
        cout<<name[j]<< " "<<count << endl;
    }

    return 0;
}