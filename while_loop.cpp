// while is fully like the python while loop, so no documentation needed

#include <bits/stdc++.h>

using namespace std;

int main() {

  string name;

  while (name.empty()) { // if (name.empty()){}
    cout << "Enter your name: ";
    getline(cin, name);
  }

  cout << "hello " << name << '\n';

  //===========================================
  // i can also use this for the cin input method i cpp

  int number;
  int sum = 0;
  while (cin >> number) {
    sum = number + sum;

  }
  cout << sum << '\n';


  return 0;
}
