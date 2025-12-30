#include <bits/stdc++.h>
using namespace std;

// create a class
class Room {

   public:
    double length;
    double breadth;
    double height;

    double calculate_area() {
        return length * breadth;
    }

    double calculate_volume() {
        return length * breadth * height;
    }
};

class Wall {
    private:
    double length;
    public:
    Wall() // default constructor
      : length{5.5}{
        cout << "Creating a wall." << endl;
        cout << "Length = " << length << endl;
    }

    Wall() = default; // to initialize variable

    void print_length() {
    	cout << "length = " << length << endl;
    }
};

class Box {
    private:
    double length;
    double height;

    public:
    Box(double len, double hgt) // parameterized constructor
    : length{len}
    , height{hgt} {
    }

    Box(const Box& obj) // copy constructor
      : length{obj.length}
      , height{obj.height} {
    }

    double calculateArea() {
      return length * height;
    }
};

int main() {

    // create object
    Room room1;
    Wall wall;

    Wall wall1;
    wall1.print_length();

    // assign values to data members
    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;

    // calculate and display the area and volume of the room
    cout << "area of Room =  " << room1.calculate_area() << endl;
    cout << "volume of Room =  " << room1.calculate_volume() << endl;

    Box bx1(10.5, 8.6);
    Box bx2(8.5, 6.3);
    Box bx3(9.4,7.9);
    Box bx4 = bx3;

    cout << "area of box1: " << bx1.calculateArea() << endl;
    cout << "area of box2: " << bx2.calculateArea();

    cout << "area of box3: " << bx3.calculateArea() << endl;
    cout << "area of box4: " << bx4.calculateArea();

    return 0;
}