#include <iostream>

// switch case is the alternative way to easily write many if else statements. like python math case.
int main(){
    using std::cout, std::cin, std::endl;
    int month;

    cout << "Enter the month(1-12): ";
    cin >> month;
  
   switch (month) {
       case 1:
           cout << "It is January" << endl;
           break;
       case 2:
           cout << "It is February" << endl;
           break;
       case 3:
           cout << "It is March" << endl;
           break;
       case 4:
           cout << "It is April" << endl;
           break;
       case 5:
           cout << "It is May" << endl;
           break;
       case 6:
           cout << "It is June" << endl;
           break;
       case 7:
           cout << "It is July" << endl;
           break;
       case 8:
           cout << "It is August" << endl;
           break;
       case 9:
           cout << "It is Septembar" << endl;
           break;
       case 10:
           cout << "It is Octobar" << endl;
           break;
       case 11:
           cout << "it is Novembar" << endl;
           break;
       case 12: 
           cout << "It is Decembar" << endl;
               break;
       default:
           cout << "Enter number between 1 to 12, you moron."  << endl;
   } 
    

    return 0;
}