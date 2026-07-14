#include <iostream>

int main() {
  using std::cout;
  using std::endl;

  // Addition
  //==============================
  int students = 20;
  students = students + 1;
  // or
  students += 1;
  // or
  students++;
  // they all do the same.
  cout << students << endl;

  //===========================

  int age = 15;
  age = age - 1;

  // or
  age -= 1;

  // or
  age--; // this works in the loop;

  cout << age << endl;

  // multiplication
  //============================
  int roll = 45;

  roll = roll * 2;
  // or
  roll *= roll;
  // or
  //  roll **; this is hilarious [do not work];

  cout << roll << endl;

  // division
  //============================

  double marks = 99;

  marks = marks / 2;
  // or
  marks /= 2;

  cout << marks << endl;

  // remainder
  //===========================

  int remiander;
  remiander = students % 2;

  cout << remiander << endl;

  return 0;
}
