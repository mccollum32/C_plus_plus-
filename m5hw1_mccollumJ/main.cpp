/*Mccollum J
4 14 24
M5hw1 Functions this program uses multiple function calls */




#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;


//Declaring functions for question 2
double getWidth();
double getLenght();
double getHeight();
double getVolume(double width, double length, double height);


//Declaring functions for question 3
int getValidNumber();
void RomanNum(int number);


//Declaring functions for question 4
void displayMenu();
void CircleArea();
void RectangleArea();
void TriangleArea();


//Declaring functions for question 4
int getSpeed();
int getHours();
void displayDistanceTraveled(int speed, int hours);

int main() {

    /*Question 1*/
    string month1, month2, month3;
    double rain1, rain2, rain3;

    // Input for the first month
    cout << "Enter the name of the first month: ";
    cin >> month1;
    cout << "Enter the amount of rain (in inches) for " << month1 << ": ";
    cin >> rain1;

    //Input for the second month
    cout << "Enter the name of the second month: ";
    cin >> month2;
    cout << "Enter the amount of rain (in inches) for " << month2 << ": ";
    cin >> rain2;

    // Input for the third month
    cout << "Enter the name of the third month: ";
    cin >> month3;
    cout << "Enter the amount of rain (in inches) for " << month3 << ": ";
    cin >> rain3;


    // Calculating the average rainfall
    double average = (rain1 + rain2 + rain3) / 3.0;

    // Displaying the result
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is: ";
    cout << fixed << setprecision(2) << average << " inches." << endl;


    /*Question 2*/
    double width,length,height;

    //Getting input from the user
    width = getWidth();
    length = getLenght();
    height = getHeight();

    //Volume function call
    double volume = getVolume(width, length, height);

    cout << "Volume of the block is: " << volume << endl;
    /*Question 3*/
    int number = getValidNumber();
    RomanNum(number);


    /*Question 4*/
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch(choice) {
            case 1:
                CircleArea();
                break;
            case 2:
                RectangleArea();
                break;
            case 3:
                TriangleArea();
                break;
            case 4:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4.\n";
        }
    } while(choice != 4);


    /*Question 5*/
    int speed = getSpeed();
    int hours = getHours();


    cout << "Hour Distance Traveled\n"
         << "------------------------\n";

    for (int i = 1; i <= hours; ++i) {
        displayDistanceTraveled(speed, i);
    }

    return 0;
}


//Declaring Functions for Question 2
double getWidth()
{
    double width;
    do {
        cout << "Enter the width of the block: ";
        cin >> width;
        if (width <= 0)
            cout << "Width cannot be zero or less. Please enter a valid width." << endl;
    } while (width <= 0);
    return width;
}

double getLenght()
{
    double length;
    do {
        cout << "Enter the length of the block: ";
        cin >> length;
        if (length <= 0)
            cout << "Length cannot be zero or less. Please enter a valid length." << endl;
    } while (length <= 0);
    return length;
}

double getHeight()
{
    double height;
    do {
        cout << "Enter the height of the block: ";
        cin >> height;
        if (height <= 0)
            cout << "Height cannot be zero or less. Please enter a valid height." << endl;
    } while (height <= 0);
    return height;
}

double getVolume(double width, double length, double height) {
    return width * length * height;
}



//Declaring functions Question 3
int getValidNumber() {
    int number;
    do {
        cout << "Enter a number between 1 through 10: ";
        cin >> number;
        if (number < 1 || number > 10)
            cout << "Invalid input. Please enter a number between the range of 1 through 10." << endl;
    } while (number < 1 || number > 10);
    return number;
}

void RomanNum(int number) {
    cout << "Roman numeral version: ";
    switch (number) {
        case 1:
            cout << "I";
            break;
        case 2:
            cout << "II";
            break;
        case 3:
            cout << "III";
            break;
        case 4:
            cout << "IV";
            break;
        case 5:
            cout << "V";
            break;
        case 6:
            cout << "VI";
            break;
        case 7:
            cout << "VII";
            break;
        case 8:
            cout << "VIII";
            break;
        case 9:
            cout << "IX";
            break;
        case 10:
            cout << "X";
            break;
    }
    cout << endl;
}



//Declaring functions Question 4
void displayMenu() {
    cout << "Geometry Calculator\n"
         << "1. Calculate the Area of a Circle\n"
         << "2. Calculate the Area of a Rectangle\n"
         << "3. Calculate the Area of a Triangle\n"
         << "4. Quit\n"
         << "Enter your choice (1-4): ";
}

void CircleArea() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    if (radius >= 0) {
        double area = M_PI * pow(radius, 2);
        cout << "The area of the circle is: " << area << endl;
    } else {
        cout << "Invalid entry! Try again.\n";
    }
}

void RectangleArea() {
    double length, width;
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;

    if (length >= 0 && width >= 0) {
        double area = length * width;
        cout << "The area of the rectangle is: " << area << endl;
    } else {
        cout << "Invalid entry! Try again.\n";
    }
}

void TriangleArea() {
    double base, height;
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;

    if (base >= 0 && height >= 0) {
        double area = 0.5 * base * height;
        cout << "The area of the triangle is: " << area << endl;
    } else {
        cout << "Invalid entry! Try again.\n";
    }
}


//Declaring functions Question 5

int getSpeed() {
    int speed;
    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;

    // Validate speed
    if (speed < 0) {
        cout << "Speed cannot be negative. Please enter a non-negative value.\n";
        exit(1); // Exit program with error code
    }

    return speed;
}

int getHours() {
    int hours;
    cout << "How many hours has it traveled? ";
    cin >> hours;


    if (hours < 1) {
        cout << "Time traveled must be at least 1 hour. Please enter a valid value.\n";
        exit(1);
    }

    return hours;
}

void displayDistanceTraveled(int speed, int hour) {
    int distance = speed * hour;
    cout << " " << hour << "    " << distance << endl;
}
