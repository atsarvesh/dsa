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
};

int main() {

    // create object
    Room room1;
    Wall wall;

    // assign values to data members
    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;

    // calculate and display the area and volume of the room
    cout << "Area of Room =  " << room1.calculate_area() << endl;
    cout << "Volume of Room =  " << room1.calculate_volume() << endl;

    return 0;
}