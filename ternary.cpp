// ternary operator is ?: replacement to an if/else statement
// condition ? expression : expression2;
// condition ? expression1 : codition2 ? expression2 : defaultStatement
// the colon works as a line seperator like python if/else
// 
///// There are two seperate way to write this 1:[8-34]; 2:[35:]


#include <iostream>

using std::cout, std::endl;
using std::string;
int main(){
  
  int grade = 75;

  // if (grade >= 30){
  //   cout << "You are passed" << endl;
  // }
  // else{
  //   cout << "You failed" << endl;
  // }
  // This was the longer version

  // this is the smaller one
// =========================================
  grade >= 30 ? cout << "You are passed" << endl : cout << "You failed" << endl;

  int number = 90;

  number %2 == 0 ? cout << "This is even" << endl : cout << "This is odd" << endl;
// ==========================================
  int lol = -23;
  lol < 0 ? cout << "This is a negetive number" << endl : lol == 0 ? cout << "This is Zero"  << endl : cout << "This is a positive number" << endl;
  
// ==========================================
// Other way to write this!!!
// Changing the syntex
// ==========================================

  bool pass = true;

  cout << (pass ? "You passed!!\n" : "You failed\n") << endl;
// ==========================================
  
  return 0;
}
