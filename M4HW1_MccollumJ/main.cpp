/*m4hw1 Mccollum J Mar 19 24
***Gold***
This assignment creates a program that prints a multiplication table
*/

#include <iostream>

using namespace std;

int main(){

    int num;

    do {
        cout << "Enter a number between 1 and 12: ";
        cin >> num;

        if (num < 1 || num > 12) {
            cout << "Invalid input. Enter a number between 1 and 12." << endl;
        }
    } while (num < 1 || num > 12);

    cout << "Multiplication table of " << num << ":" << endl;

    for (int i = 1; i <= 12; i++) {
        cout << num << " * " << i << " = " << num * i << endl;
    }


    return 0;
}

