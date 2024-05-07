/*M5T1
3 22 24
McCollum J
This program creates simple functions for the program to run properly
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Declaring the functions
string theAnswer(int answer);
void printAnswer(string msg);

int main()
{
    int answer;
    srand(time(0));
    answer = rand() % 3 + 1;

    string message;
    message = theAnswer(answer);
    printAnswer(message);

    return 0;
}

//Defining the Functions
string theAnswer (int answer) {
    string answerIs;
    answerIs = "This is the answer to the answer of the answer. ";
    answerIs += to_string(answer);
    return answerIs;
}
void printAnswer(string msg){
    cout << msg << endl;
}
