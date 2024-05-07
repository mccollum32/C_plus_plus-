/*
M3lab1 IF statements + Functions
McCollum Joseph
Feb 28 24
This program ask a user for input/then uses a basic IF/Else statement
Adding on function choices as well
*/
#include <iostream>

using namespace std;

//These functions are declared and then called upon
void dontPlayGames(){
    cout << "You don't play video games for some odd reason." << endl;
}
void differentGame(){
    cout << "You prefer a different game instead of the choices given." << endl;
}

int main()
{
    int options;

    cout << "Which Game is better? Left for dead 1 or 2?" << endl;
    cout << "Select from 1,2,3,4." << endl;
    cin >> options;

    if(options == 1){
        cout << "You chose option 1 (Left for dead 1) " << endl;
    }
    else if(options == 2){
        cout << "You chose option 2 (Left for dead 2) " << endl;
    }
    else if(options == 3){
        dontPlayGames();
    }
    else if(options == 4){
        differentGame();
    }
    else{
        cout << "Invalid entry! Try again." << endl;
    }

    cout << "Thanks for voting" << endl;
    return 0;
}
