#include <bits/stdc++.h>
#include <ctime>

using namespace std;

int main() {

  int num;
  int guess;
  int attemt = 0;

  srand(time(0));

  num = (rand() % 100) + 1;

  do {
    cout << "Guess a number betweeen 1 and 100: ";
    cin >> guess;
    attemt++;

    if (guess > num) {
      cout << "Try bigger numbers: " << endl;
    }

    else if (guess < num) {
      cout << "Try smaller number: " << '\n';
    }

    else {
      cout << "Correc! You hit it in " << attemt << "attemts." << endl;
    }

  } while (guess != num);

  return 0;
}
