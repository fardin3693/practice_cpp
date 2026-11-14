#include <bits/stdc++.h>
#include <ctime>

// these random numbers are not truly random, they are psudo random.
// randomness based on an algorithm

using namespace std;

int main() {

  srand(time(NULL));

  int num = (rand() % 6);
  // the number after the % sign decides what is the range from 0 to that number.
  cout << num;
  return 0;
}
