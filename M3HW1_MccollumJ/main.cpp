/*
M3WHW1 - Gold
Mccollum J
Feb 28 24
This program has multiple Questions involving IF/Else statements using user input as well

*/

#include <iostream>
#include <iomanip>
#include <random>

using namespace std;


void yeschoice(){
    cout << "That's great! Most people like chat bots." << endl;
}
void nochoice(){
    cout << "That's unfortunate! Eventually you will one day." << endl;
}
void invalidResponse(){
    cout << "Invalid entry! Try again." << endl;
}
void invalidResponse2(){
    cout << "If you are undecided that is understandable. " << endl;
}


int main()
{

    int response;
    cout << "Question 1. Write a very simple “chat bot” that has a very short conversation. " << endl;
    cout << "Hello, I'm a C++ Chat bot.\nDo you like chat bots? Yes(1) or No(2)?" << endl;
    cin >> response;

    if (response == 1){
        yeschoice();
    }
    else if(response == 2){
        nochoice();
    }
    else{
        invalidResponse();
        invalidResponse2();
    }
    cout << "Thank you for responding." << endl;
    cout << "**********" << endl;

    int choice;
    double mealPrice;
    double tip = 0.15;
    double tax = 0.3;

    cout << "Question 2. Add this functionality to the program, Ask them to enter the price of the meal if the order is dine in or takeaway.\n" << endl;
    cout << "Welcome to the restaurant. Will this be dine in or carryout? " << endl;
    cout << "Dine in (1) or Carry out (2). " << endl;
    cin >> choice;

    if(choice == 1){

        cout << "You chose to dine in. " << endl;
        cout << "Enter price of your meal:" << endl;
        cin >> mealPrice;

        //first option for dine in customer
        double totalTip = (mealPrice * tip);
        double totalCost = (mealPrice + totalTip);
        cout << "The auto generated tip (0.15%): $" <<fixed << setprecision(2)<< tip << endl;
        cout << "The final cost of the meal (tip included): $" << fixed << setprecision(2) << totalCost << endl;

    }
    else if(choice == 2){
        cout << "You chose take out." << endl;
        cout << "Enter the price of the meal:" << endl;
        cin >> mealPrice;

        //second option for take out customers
        double taxes = (mealPrice * tax);
        double totalwTax = (mealPrice + taxes);

        cout << "The meal taxes: $" << fixed << setprecision(2)<< taxes << endl;
        cout << "The total of the meal (tax included): $" << fixed << setprecision(2) << totalwTax << endl;

    }
    else{
        cout << "I suppose you are not that hungry thanks for coming." << endl;
    }

    cout << "*************************" << endl;

    int opts;
    int chooseFrom;
    string choiceOpt;
    string bestWres;

    cout << "Question 3." << endl;
    cout << "Welcome to Impossible. This game is simple chose correct move forward. Don't and you lose, Good luck." << endl;

    //Random number generator
    srand(time(0));
    opts = rand() % 2 + 1 ;

    cout << "Do you want to try your luck? (Yes) or (No)." << endl;
    cin >> choiceOpt;

    if (choiceOpt == "Yes" | choiceOpt == "yes" | choiceOpt == "y"){
        cout << "Good choice" << endl;
        cout << "\n" ;
        cout << "First game, match the numbers up to advance forward. Chose a number between (1 - 2)." << endl;
        cin >> chooseFrom;

        if(chooseFrom == opts){
            cout << "Match! pretty good, next game." << endl;
            cout << "\n";

            cout << "Second Game, Who's the greatest wrestler of all time? " << endl;
            cin >> bestWres;

            if (bestWres == "Stone Cold Steve Austin" | bestWres == "Stone Cold" | bestWres == "stone cold steve austin" | bestWres == "stone cold"){
                cout << "You win! Game over" << endl;
            }
            else{
                cout << "The only choice for this is Stone Cold Steve Austin! Anybody else is wrong!\nYou automatically lose." << endl;
            }
        }
        else{
            cout << "Not a match! Game over!." << endl;
        }
    }
    else if(choiceOpt == "No" | choiceOpt == "no" | choiceOpt == "n"){
        cout << "Everyone picks this one" << endl;
        cout << "Game over!" << endl;
    }
    else{
        cout << "Invalid input. Game over" << endl;
    }

    //Random number generator + choices
    srand(time(0));
    int number1 = rand() % 10;
    int number2 = rand() % 10;

    cout << "**********************" << endl;
    cout << "What is the sum of " << number1 << " and " << number2 << "?" << endl;

    int userChoice;
    cout << "Enter your answer: ";
    cin >> userChoice;

    // Checks to see if the answer is correct
    int theAnswer = number1 + number2;

    if (userChoice == theAnswer) {
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect!\nThe correct answer is: " << theAnswer << "." << endl;
    }

    return 0;
}
