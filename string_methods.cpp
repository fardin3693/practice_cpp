// this file will cover some of the populer and useful c++ string method.
//
//

#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main() {

  string name;

  cout << "Enter your name: ";

  std::getline(std::cin, name);

  // length() method >> name.lenght()

  // if (name.length() > 12) {
  //   cout << "Your name can not be over 12 charecters" << endl;
  // }

  // else {
  //   cout << "Welcome: " << name << endl;
  // }
  // ===================================================

  // empty() method >> returns Bool whether there is entered any string or not.

  // if (name.empty()){
  //     cout << "Bro, just enter the name 🤨" << endl;
  // }
  // else{
  //     cout << "Hello: " << name << endl;
  // }

  //======================================================

  // clear() method >> to clear the user input or anything.

  // name.clear();

  // cout << "hello: " << name << endl;

  //=======================================================
  // append() method >> add something to the last of the string : usaual for
  // email handling

  // name.append(" Islam");

  // cout << "Hello: " << name << endl;

  // =======================================================
  // at(index) method >> to see the charecter of a string on a index : this
  // shows an error if there is nothing at that index

  // cout << name.at(2) << endl;

  //========================================================
  // insert(index, "str") >> to enter a str at a certain index

  // cout << name.insert(2, "LOL") << endl;

  //=========================================================
  // find(' ') >> takes input of "char" retruns the index within the str : this
  // is case sensitive

  // cout << name.find('f') << endl;

  //==========================================================
  // erase(beggenin_indx, end_indx) >> erase the portion between the indx :
  // end_indx doesn't count.

  cout << name.erase(0, 3) << endl;

  return 0;
}
