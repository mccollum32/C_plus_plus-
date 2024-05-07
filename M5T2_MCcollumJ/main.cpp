/*
M5T2 Mccollum J
This program uses functions to print out the square root up to 10
Mar 25 24
*/

#include <iostream>

using namespace std;


//The squared function that calculates the square root of the number and returns the number times a number
int squared(int num) {
    return num * num;
}

//This function has no return value, it prints out the output
void printAnswer(int num, int square) {
    cout << num << " squared is: " << square << endl;
}


int main()
{
    for (int i = 1; i <= 10; ++i){
        printAnswer(i, squared(i));
    }

    return 0;
}
