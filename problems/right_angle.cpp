#include <bits/stdc++.h>

using namespace std;

int main() {
  int n = 5;

  for (int i = 1; i <= n; i++) {

    for (int space = 1; space <= n - i; space++) {
      cout << ' ';
    }

    for (int symbol = 1; symbol <= i; symbol++) {
      cout << '*';
    }

    cout << '\n';
  }

  return 0;
}
