// this is a tutorial for nested loops in c++

#include <bits/stdc++.h>
using namespace std;

int main(){

    int rows, coloms;
    char symbols;

    cout << "Please enter the number of rows: " ;
    cin >> rows;

    cout << "Enter the numbers of coloms: ";
    cin >> coloms;

    cout << "Enter the symbol to cells: ";
    cin >> symbols;

    for (int i = 1; i <= rows ; i++){
        for (int j = coloms; j >= i ; j--){
            cout << symbols;
        }
        cout << '\n';
    }

    return 0;
}
