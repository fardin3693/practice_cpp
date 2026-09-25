#include <iostream>
#include <cmath>

// this function will find the hypotenuse of the right side triangle
int main(){ 
    using std::cout;
    using std::endl;
    using std::cin;

    double base;
    double hight;
    double hypo;

    cout << "what is the hight is the trianlge: ";
    cin >> hight;
    cout << "What is the base of the triangle: ";
    cin >> base;

    // hypo = sqrt(pow(hight, 2) + pow(base, 2));
    hypo  = sqrt(pow(hight, 2) + pow(base, 2));

    cout << "The hypotenuse of the triangle is: " << hypo << endl;
    
    

    return 0;
}