// &&  = check the two conssition is true
// || = or operator
// ! = reverse the logical state of its operand


#include <iostream>

using std::cout,  std::endl , std::cin;

int main(){

    float temp;

    cout << "Enter the tempareture: ";
    cin >> temp ;
    // && operator
    // =====================================
    if (temp > 0 && temp < 30){
        cout << "The termpareture is good." << endl;
    }
    else {
        cout << "The terperature is bad" << endl;
    }
    // =====================================
    //
    // || operator
    if (temp <= 0 || temp >= 30){
        cout << "The temperature is bad" << endl;
    }
    else{
        cout << "The terpareture is good" << endl;
    }
    // ! operator
    //
    bool study = true;

    if (study){
        cout << "I have done my study" << endl;
    }
    else{
        cout << "I will fail" << endl;
    }

    if (!study){ // using the reverse logic operator 
        cout << "I will fail" << endl; // have to reverse the expression too, else wrong answare
    }
    else{
        cout << "I have done my study" << endl;
    }
    return 0;
}
