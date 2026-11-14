#include <bits/stdc++.h>
#include <ctime>

using namespace std;

int main() {

  srand(time(0));

  int num = rand() % 6;

  switch (num) {
  case 1:
    cout << "You dull creature." << '\n';
    break;
  case 2:
    cout << "You are a little good" << '\n';
    break;

  case 3:
    cout << "You are good" << '\n';
    break;
  case 4:
    cout << "You are best" << '\n';
    break;
  case 5:
    cout << "You are excellent" << '\n';
    break;
  }

  return 0;
}
