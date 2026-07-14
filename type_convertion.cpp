#include <iostream>

int main() {
  using std::cout;
  using std::endl;

  double x = 3.1416;
  cout << int(x) << endl;
  // another way [implicit]
  double e = (int)2.14;
  cout << e << endl;

  char sd = 111; // it will show the ascii letter refering to the binary of
                 // decimal 111.
  int ad = 0;    // why this is not working like above???
  cout << sd << endl;
  cout << char(ad) << endl;
  cout << (char)100 << endl;

  // real life explanation

  int correct = 90;
  int questions = 99;

  // double score = correct / questions * 100; // this will return 0. becouse
  // c++ with remove the decimel places;
  double score = correct / (double)questions * 100; // this will work fine.

  cout << score << '%' << endl;

  return 0;
}
