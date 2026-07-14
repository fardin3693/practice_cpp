#include <iostream>
#include <string>

int main() {
  using std::cin;
  using std::cout;
  using std::endl;
  using std::getline;
  using std::string;

  int age;
  string name;
  char grade;

  // input area
  //  cout << "What's your name: "; // this can accept only one word, no space
  //  in between input. std::cin >> name; cout << "What's your age: "; std::cin
  //  >> age;

  // multi word input
  // std::getline function will help us with that

  cout << "What's your name: ";
  getline(std::cin >> std::ws, name); // getline only works for string
  cout << "What's your age: ";
  cin >> age;
  cout << "what's you grade: ";
  cin >> grade;

  cout << "Hello" << " " << name << endl;
  cout << "You are " << age << " years old." << endl;
  cout << "Your grade is " << grade << endl;

  return 0;
}
