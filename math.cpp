#include <cmath>
#include <iostream>

int main() {
  using std::cout;
  using std::endl;

  double x = 3;
  double y = 4;
  double z;
  double e;
  double po;
  double sq;
  double abso;
  double pi = 3.11416;

  z = std::max(x, y);
  e = std::min(x, y);
  po = pow(2, 3); // 2 to the [power of 3]
  sq = sqrt(9);
  abso = abs(-3);

  cout << "rounded PI: " << round(pi) << endl; // round to the nearest int
  cout << "PI round up: " << ceil(pi) << endl;  // always round up
  cout << "PI round down: " << floor(pi) << endl; // like python floor division, round them down
  cout << "max: " << z << endl;
  cout << "min: " << e << endl;
  cout << "power: " << po << endl;
  cout << "sqare root: " << sq << endl;
  cout << "absolute vale: " << abso << endl;

  return 0;
}
