/* TYPEDEF:
    it reserved keyword used to create an additional name (alias) for another
  data type. New idntifier for an existing type Helps with readibility and
  reduces typos.
*/

#include <iostream>
// #include <vector>
// #include <string.h>

typedef std::string text_t; // test_t is the alias
typedef int number_t;

using text_t = std::string;
using number_t = int; // these two liens can be used as the replacement of the
                      // typedaf keyworkd. They are good at template making.

int main() {
  using std::cout;
  using std::endl; // shortening the std::cout and sdd::endl;

  std::string firstname; // this is big

  firstname = "fardin: in old way";

  text_t firstName = "Fardin, in new way"; // this is clean
  // text_t just defining the type of firstName as i set earlier
  number_t age = 15;

  int roll = 45;
  int roll1 = 34;

  cout << age << endl;
  cout << firstname << endl;
  cout << firstName << endl;

  return 0;
}


// typedef are good, but the usign keyword is best. i would rather prefer the 'using' keyword. Both do the same thing.