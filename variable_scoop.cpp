// there are two kinds of variables there:
// 1. local = decleared inside a function or blok{}
// global = decleared outside of all function
// one function is not aware of another function, thats why we use agrs.
// global variables can be accessed from anywhere, but local not.
//

#include <bits/stdc++.h>
using namespace std;
void print_lol(string lol);

int main() {
  string lol = "lol";
  print_lol(lol);
  return 0;
}

void print_lol(string lol) {

  cout << lol << '\n';
}
