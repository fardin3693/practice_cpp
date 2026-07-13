/*/NAMESPACE:

    It privides a solution for presenting name cinficts in large projects.
    Each entity nedds a unique name as c++ is compiled, not interpreted.
    a namespace allows for identically names entities as long as the namespace
   are different.
*/

#include <iostream>

namespace first {

int x = 1;
}
/*/ MY UNDERSTANDING:
   as c++ is a compilered language, we can not reenter a varible name.

   but by using the namespace keyword, we can explicitely express it.
    */
namespace second {

int x = 2;
}

//=============================================
int minor() {
  using namespace first;

  std::cout << "running the second name " << x << std::endl;

  return 0;
}
//=============================================

int moron() {
  using namespace second;

  std::cout << "running the second name " << x << std::endl;
  return 0;
}
//=============================================

int evil() {
  using std::cout;
  // locally using the namespace for using std::cout shorthand.
  using std::endl;

  cout << "writing hello world now is easy" << endl;

  return 0;
}

//=============================================
int main() {

  int x = 0;

  std::cout << first::x << std::endl;  // using the namespace 'first;
  std::cout << second::x << std::endl; // using the namespace 'second;

  std::cout << x << std::endl;

  minor(); // this explicit function uses the minor function, with implicitely
           // calls the namespace first for the x value.
  moron();

  std::cout << "using evil function: " << evil() << std::endl;

  return 0;
}
