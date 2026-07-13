#include <iostream>

int main() {
  const double PI = 3.14126;

  // PI = 2323.23; this is not valid as i used const type for PI
  double radious = 10;
  double circumference = 2 * PI * radious;

  const int LIGHT_SPEED = 299792458;
  const int WITDH = 1920;
  const int HIGHT = 10420;

  std::cout << circumference << "cm" << '\n';

  return 0;
}


// const keyword is used to maintain a certain value to keep it constant throught the entier project.