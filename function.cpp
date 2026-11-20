#include <bits/stdc++.h>
using namespace std;

void happybirthday(string name, int age) {

  cout << "Happy birthday " << name << '\n';
  cout << "You are " << age << "years old." << '\n';
}

int main() {
  string name;
  int age;

  cout << "Enter your name: ";
  cin >> name;

  cout << "Enter your age: ";
  cin >> age;

  happybirthday(name, age);

  return 0;
}
