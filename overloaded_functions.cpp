// the overloaded function means that you can use many functions in the same name.
// but the functions agrs needs to be different
// so that you can just use it, or use it with input. both the way possible.
// the function with its args is called fucntion sygnature, this is the unique for the  program.

#include <bits/stdc++.h>
using namespace std;
void bakepizza();
void bakepizza(string toppings);

int main() {
  bakepizza();
  bakepizza("lol");
  return 0;
}

void bakepizza() { // this function doesnot need input.

  cout << "Here is your pizza." << '\n';
}

void bakepizza(string toppings) { // this is the function with args.

  cout << "This is the pizza with toppings" << toppings << endl;
}
