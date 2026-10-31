// do while = BD police, first bit the suspect then ask him whether he actually
// done it or not

#include <bits/stdc++.h>

using namespace std;

int main(){
    int number;

    do{
        cout << "Enter a positive number: ";
        cin >> number;
    } while (number < 0);
    
    cout << "this is: " << number<< '\n';

    return 0;
}
