/*
M6T2 - Gold Tier, Mccollum J, 5/5/24
*/

#include <iostream>
#include "Box.cpp"

using namespace std;

//Creating the rectangle class
class Rectangle
{
    private:
        double width,length;
    public:
        void setWidth(double);
        void setLength(double);
        double getWidth() const;
        double getLength() const;
        double getArea() const;
        double getPerimeter() const;
};

//Assigning values using the class and its functions
void Rectangle::setWidth(double wi)
{
    width = wi;
}
void Rectangle::setLength(double len)
{
    length = len;
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getLength() const
{
    return length;
}

double Rectangle::getArea() const
{
    return width * length;
}

double Rectangle::getPerimeter() const
{
    return 2 * (length + width);
}


int main()
{
    //Calls the rectangle class
    Rectangle square1;

    //Local variable for width/lenght
    double recWidth;
    double recLength;

    cout << "Calculate the area of a rectangle\n";
    cout << "What is the width? ";
    cin >> recWidth;

    while (recWidth <= 0){
        cout << "Invalid input! Number must be a positive and not zero. Try again: ";
    cin >> recWidth;
    }

    cout << "What is the length? " ;
    cin >> recLength;

    while (recLength <= 0){
        cout << "Invalid input! Number must be a positive and not zero. Try again: ";
    cin >> recLength;
    }


    //Stores the rectangle Width/Length in the box object
    square1.setWidth(recWidth);
    square1.setLength(recLength);

    //Displays the rectangles data that was inputted by the user
    cout << "Here is the rectangle's data:\n";
    cout << "Width: " << square1.getWidth() << endl;
    cout << "Length: " << square1.getLength() << endl;
    cout << "Area: " << square1.getArea() << endl;

    double l,w,h;
    cout << "Enter the cubes info: " << endl;
    cin >> l >> w >> h;

    Box boxed(l, w, h);
    {
      cout << "The volume of the cube is: "  << boxed.volume() << endl;
    }

    return 0;
}
