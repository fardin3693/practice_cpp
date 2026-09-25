#include <iostream>

int main(){
    using std::cin, std::cout, std::endl;
    char op; // the operent placeholder
    double num1;
    double num2;

    cout << "*************** Calculator ***************" << endl;

    cout << "Enter single operend (+ - * /): ";
    cin >> op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch (op) {
        case '+':
            cout << "The addition is : " << num1 + num2 << endl;
            break;
        case '-':
            cout << "The substraction is: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "The mulitiplication is " << num1 * num2 << endl;
            break;
        case '/':
            cout << "The division is: " << num1 / num2 << endl;
            break;

        default:
            cout << "Entered wrong operend: " << op << endl;

    }

    cout << "******************************************\n";

    return 0;
}
