/*
    destructor is called automatically when an object goes out of scope
    or 
    when we delete the object with the delete expression

    ~ precedes identifier to incdicate destructor
*/

#include <bits/stdc++.h>
using namespace std;

class Wall {
  private:
    double* length;
    double* height;

  public:

    Wall(double len = 1.0, double hgt = 1.0)
      : length{new double{len}}
      , height{new double{hgt}} {
    }
    
    Wall(const Wall& obj)
      : length{new double{*(obj.length)}}
      , height{new double{*(obj.height)}} {
    }
    
    void setLength(double len) {
        *length = len;
    }
    
    double calculateArea() {
      return *length * *height;
    }
    
    // destructor to deallocate memory
    ~Wall() {
        delete length;
        delete height;
    }
};

int main() {

    Wall wall1(10.5, 8.6);

    Wall wall2 = wall1;
  
    wall2.setLength(11.5);

    cout << "area of wall 1: " << wall1.calculateArea() << endl;
    cout << "area of wall 2: " << wall2.calculateArea();

  return 0;
}