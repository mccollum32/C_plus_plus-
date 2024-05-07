/*
m5lab1
McCollum J 4/10/24
Choose your own adventure mini game using simple functions
*/

#include <iostream>
#include <limits>

using namespace std;

void main_menu();
void choice1();
void choice2();
void choice3();
void choice4();
void choice5();


int main() {
    main_menu();

    return 0;
}


void main_menu() {
    int options;

    do {
        cout << "Main Menu" << endl;
        cout << "*******************" << endl;
        cout << "You witnessed the eclipse but you noticed you have super powers now..." << endl;
        cout << "What powers do you choose?" << endl;
        cout << "1. Superhuman strength/Flight" << endl;
        cout << "2. Shapeshifter/Psionics" << endl;
        cout << "3. Teleportation/Power absorption" << endl;
        cout << "4. Time manipulation/Telepathy" << endl;
        cout << "5. No Powers, it was just your imagination [Quit]" << endl;
        cout << "Choose: ";

        if (!(cin >> options)) {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else {
            switch (options) {
            case 1:
                choice1();
                return;
            case 2:
                choice2();
                return;
            case 3:
                choice3();
                return;
            case 4:
                choice4();
                return;
            case 5:
                choice5();
                return;
            default:
                cout << "Invalid Input amigo, try again! " << endl;
                cout << "*******************" << endl;
            }
        }
    } while (true);
}

//Function definitions
void choice1()
{
    int choice;
    cout << "You chose, Superhuman with Strength & Flight" << endl;
    cout << "Lets explore your path." << endl;
    cout << "[1] SuperHero " << endl;
    cout << "[2] SuperVillain " << endl;
    cout << "Chose.." << endl;

    do {
        if (cin >> choice) {
            // Check if input is within valid range
            if (choice >= 1 && choice <= 2) {
                break; // Exit the loop if valid choice entered
            }
            else {
                cout << "Invalid choice. Please enter 1 for Superhero or 2 for Supervillain.\n";
            }
        }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid Entry. Please enter a number.\n";
        }
    } while (true);


    if (choice == 1) {
        cout << "You chose the path of Justice." << endl;
    }
    else if (choice == 2) {
        cout << "You chose to rule over your foes!" << endl;
    }
}

void choice2()
{
    int choice;
    cout << "You chose, Shapeshifter & Psionics" << endl;
    cout << "Lets explore your path." << endl;
    cout << "[1] SuperHero " << endl;
    cout << "[2] SuperVillain " << endl;
    cout << "Chose.." << endl;

    do {
        if (cin >> choice) {
            // Check if input is within valid range
            if (choice >= 1 && choice <= 2) {
                break; // Exit the loop if valid choice entered
            }
            else {
                cout << "Invalid choice. Please enter 1 for Superhero or 2 for Supervillain.\n";
            }
        }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid Entry. Please enter a number.\n";
        }
    } while (true);


    if (choice == 1) {
        cout << "You chose the path of Justice." << endl;
    }
    else if (choice == 2) {
        cout << "You chose to rule over your foes!" << endl;
    }
}

void choice3()
{
    int choice;
    cout << "You chose, Teleportation & Power absorption" << endl;
    cout << "Lets explore your path." << endl;
    cout << "[1] SuperHero " << endl;
    cout << "[2] SuperVillain " << endl;
    cout << "Chose.." << endl;

    do {
        if (cin >> choice) {
            // Check if input is within valid range
            if (choice >= 1 && choice <= 2) {
                break; // Exit the loop if valid choice entered
            }
            else {
                cout << "Invalid choice. Please enter 1 for Superhero or 2 for Supervillain.\n";
            }
        }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid Entry. Please enter a number.\n";
        }
    } while (true);


    if (choice == 1) {
        cout << "You chose the path of Justice." << endl;
    }
    else if (choice == 2) {
        cout << "You chose to rule over your foes!" << endl;
    }
}

void choice4()
{
    int choice;
    cout << "You chose, Time manipulation & Telepathy" << endl;
    cout << "Lets explore your path." << endl;
    cout << "[1] SuperHero " << endl;
    cout << "[2] SuperVillain " << endl;
    cout << "Chose.." << endl;

    do {
        if (cin >> choice) {
            // Check if input is within valid range
            if (choice >= 1 && choice <= 2) {
                break; // Exit the loop if valid choice entered
            }
            else {
                cout << "Invalid choice. Please enter 1 for Superhero or 2 for Supervillain.\n";
            }
        }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid Entry. Please enter a number.\n";
        }
    } while (true);


    if (choice == 1) {
        cout << "You chose the path of Justice." << endl;
    }
    else if (choice == 2) {
        cout << "You chose to rule over your foes!" << endl;
    }
}

void choice5()
{
    int choice;
    cout << "It was just your imagination" << endl;
    cout << "You wake up in McDonalds, your break is over." << endl;
    cout << "Back to work " << endl;
    cout << "Game Over!" << endl;

}


