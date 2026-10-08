// This program converts Celsius to Fahrenheit and Fahrenheit to Celsius.

#include <iomanip>
#include <iostream>

using std::cout, std::cin, std::endl, std::fixed, std::setprecision;

int main() {
  double temp;
  int unit;
  double converted;

  cout << fixed << setprecision(3); // Set the number of decimal places to 3.

  cout << "============== Temperature Converter ==============" << endl;

  cout << "1. Celsius to Fahrenheit\n"
       << "2. Fahrenheit to Celsius" << endl;
  cout << "Choose an option from the menu (1 or 2): ";
  cin >> unit;

  if (unit == 1) {
    cout << "Enter the temperature in Celsius: ";
    cin >> temp;

    converted = (temp * 1.8) + 32;
    cout << temp << "°C is " << converted << "°F." << endl;
  } else if (unit == 2) {
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> temp;

    converted = (temp - 32) * (5.0 / 9.0);
    cout << temp << "°F is " << converted << "°C." << endl;
  } else {
    cout << "Please choose a valid option from the menu." << endl;
  }

  cout << "=====================================================" << endl;

  return 0;
}
