/*
M2LAB1 Mccollum Joseph Feb 14 24 This program Calculates the volume of a cube (crate) from the users input
*/

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    const double COSTPERFOOT = 0.23;
    const double CHARGEPERFOOT = 0.5;
    double cbLenght;
    double cbWidth;
    double cbHeight;
    double cbCost;
    double cbCharge;
    double cbfinalprofit;
    double cbVol;


    //User Input with out calculations
    cout << "Input the Lenght: " << endl;
    cin >> cbLenght;
    cout << "Length: " << cbLenght << endl;
    cout << "\n";
    cout << "Input the Width: " << endl;
    cin >> cbWidth;
    cout << "Width: " << cbWidth << endl;
    cout << "\n";
    cout << "Input the Height: " << endl;
    cin >> cbHeight;
    cout << "Height: " << cbHeight << endl;
    cout << "\n";

    //Calculations for the cube
    cbVol = cbLenght * cbWidth * cbHeight;
    cbCost = cbVol * COSTPERFOOT;
    cbCharge = cbVol * CHARGEPERFOOT;
    cbfinalprofit = cbCharge - cbCost;

    //Calculations from users input
    cout << "The volume of the cube is: " << cbVol << endl;
    cout << "The total cost of the cube (crate,box) is: $" << fixed << setprecision(2) << cbCost << endl;
    cout << "The charge price of the cube (crate,box) is: $" << fixed << setprecision(2) << cbCharge << endl;
    cout << "The total profit of the cube (crate,box) is: $" << fixed << setprecision(2) << cbfinalprofit << endl;


    return 0;
}
