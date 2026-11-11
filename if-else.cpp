#include <iostream>

int main() {
  using std::cin;
  using std::cout;
  using std::endl;

  int age;

  cout << "What your age: ";
  cin >> age;

  if (age <= 0) {
    cout << "No problem, you can go anywhere!" << endl;
  } else if (age >= 1 && age < 18) {
    cout << "You are a lil bro" << endl;
  } else if (age >= 18 && age <= 100) {
    cout << "You are eligible to use this." << endl;
  } else if (age > 100) {
    cout << "You should die peacefully, do not enter here." << endl;
  } else {
    cout << "Bro, i think you entered something wrong" << endl;
  }

  float grade = 4.5;
  if (grade > 1) {
    cout << "You have a good result.";
  } else {
    cout << "You do not have a good result. better luck next time.";
  };
  return 0;
}
