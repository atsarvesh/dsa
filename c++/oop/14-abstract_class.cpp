/*
    pure virtual functions:
    - if function doesn't have any use in base class
    - but function must be implemented by all its derived class

    pure virtual function doesn't have function body and must end with "= 0"

    abstract class:
    - class that contain pure virtual function i sabstract class
    - can't create objects of abstract class
    - can derive classes from them 
    - can use their dat amembers and member functions except pure virtual function
*/

#include <bits/stdc++.h>
using namespace std;

// abstract class
class Shape {
    
    protected:
    float dimension;

    public:
    void getDimension() {
        cin >> dimension;
    }

    // pure virtual Function
    virtual float calculateArea() = 0;
};

// derived class
class Square : public Shape {
    public:
    float calculateArea() {
        return dimension * dimension;
    }
};

// derived class
class Circle : public Shape {
    public:
    float calculateArea() {
        return 3.14 * dimension * dimension;
    }
};

int main() {
    
    Square square;
    Circle circle;

    cout << "enter the length of the square: ";
    square.getDimension();
    cout << "area of square: " << square.calculateArea() << endl;

    cout << "\nenter radius of the circle: ";
    circle.getDimension();
    cout << "area of circle: " << circle.calculateArea() << endl;

    return 0;
}
