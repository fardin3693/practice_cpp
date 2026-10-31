// while is fully like the python while loop, so no documentation needed

#include <bits/stdc++.h>

using namespace std;

int main(){

    string name;

    while (name.empty()){ //if (name.empty()){}
        cout << "Enter your name: ";
        getline(cin, name);
    }

    cout << "hello " << name << '\n';


    return 0;
}