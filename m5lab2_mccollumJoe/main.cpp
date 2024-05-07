/*
M5LAB2 Mccoll0um Joseph 4 11 24
The program will ask the user to enter the width and length of a rectangle.
It will then calculate the area. Finally it will display all three values in well formatted output
*/
#include <iostream>
using namespace std;

//Functions
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double lenght, double width, double area);


int main()
{
	// This program calculates the area of a rectangle.

   double length = getLength();    // The rectangle's length
   double width = getWidth();     // The rectangle's width

   // The rectangle's area
   double area = getArea(length, width);

   // Get the rectangle's length.
   length = getLength();


   // Display the rectangle's data.
   displayData(length, width, area);

   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************

double getLength()
{
    double length;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    return length;
}

double getWidth()
{
    double width;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    return width;
}

double getArea(double length, double width)
{
    return length * width;
}

void displayData(double length, double width, double area)
{
    cout << "Rectangle Dimensions:" << endl;
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << area << endl;
}
