//M2HW1 Mccollum Joseph Feb 20 24
//This program has multiple questions and will be defined in each section


#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string userName;
    double balance , deposit , withdraw;
    double finaldraw;
    int accountNum = 55555500;


    cout << "Question 1: Write a program that simulates banking transactions." << endl;
    cout << "Welcome back to Random Bank! " <<endl;
    cout << "Enter your UserName: " << endl;
    cin >> userName;
    cout << "Enter your account balance: " << endl;
    cin >> balance;
    cout << "How much would you like to deposit into the account? " << endl;
    cin >> deposit;
    cout << "How much would you like to withdraw from the account? " << endl;
    cin >> withdraw;
    //Calculations
    finaldraw = balance + deposit - withdraw;
    //Final output
    cout << "Username: " << userName << "\nUser Account Number: " << accountNum << endl;
    cout << "Your final account balance is $" << fixed << setprecision(2) << finaldraw << endl;
    cout << "\n";
    cout << "***********" << endl;

    const double COSTPERFOOT = 0.3;
    const double CHARGEPERFOOT = 0.52;
    double lenght, width, height, cost, charge, finalprofit, vol;

    cout << "Question 2: Use the M2LAB1 program as a base for this question." << endl;
    cout << "Input the crates Lenght: " << endl;
    cin >> lenght;
    cout << "Length: " << lenght << endl;
    cout << "Input the crates Width: " << endl;
    cin >> width;
    cout << "Width: " << width << endl;
    cout << "Input the crates Height: " << endl;
    cin >> height;
    cout << "Height: " << height << endl;
    cout << "\n";

    vol = lenght * width * height;
    cost = vol * COSTPERFOOT;
    charge = vol * CHARGEPERFOOT;
    finalprofit = charge - cost;

    cout << "The volume for the crates: " << vol << endl;
    cout << "The total cost per crate: $" << fixed << setprecision(2) << cost << endl;
    cout << "The charge price per crate: $" << fixed << setprecision(2) << charge << endl;
    cout << "The total cost per crate: $" << fixed << setprecision(2) << finalprofit << endl;
    cout << "***********" << endl;

    cout << "Question 3: You are throwing a pizza party. Each visitor should get three slices of pizza." << endl;
    int pizza, pizzaslice, visitor, totalslice, totaleft;
    cout << "How many pizzas are being ordered? " << endl;
    cin >> pizza;
    cout << "How many slices per pizza? " << endl;
    cin >> pizzaslice;
    cout << "How many people will you be expecting? " << endl;
    cin >> visitor;

    //Calculations of slices and for visitors
    totalslice = pizza * pizzaslice;
    totaleft = totalslice - visitor * 3;

    cout << "Pizza left over: " << totaleft << endl;
    cout << "***********" << endl;
    cout << "Question 4: Since FTCC has sports teams, you've been hired to write a cheering program." << endl;

    string school = "FTCC";
    string team = "Trojans";
    string cheers = "Let's GO! ";

    string cheerone = cheers + school;
    string cheertwo = cheers + team;

    cout << cheerone << "\n" << cheerone << "\n" << cheerone << "\n" << cheertwo << endl;

    return 0;
}
