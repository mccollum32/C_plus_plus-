#ifndef BOX_H
#define BOX_H

#include <iostream>
using namespace std;

class Box {
private:
    double length,width,height;

public:
    Box(double l, double w, double h) {
        setLength(l);
        setWidth(w);
        setHeight(h);
    }

    double volume() const {
        return length * width * height;
    }

    void setLength(double l) {
        while (l <= 0) {
            cout << "Invalid input! Number must be a positive and not zero. Try again: ";
            cin >> l;
        }
        length = l;
    }

    void setWidth(double w) {
        while (w <= 0) {
            cout << "Invalid input! Number must be a positive and not zero. Try again: ";
            cin >> w;
        }
        width = w;
    }

    void setHeight(double h) {
        while (h <= 0) {
            cout << "Invalid input! Number must be a positive and not zero. Try again: ";
            cin >> h;
        }
        height = h;
    }

    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    double getHeight() const {
        return height;
    }
};


#endif // BOX_H_INCLUDED
