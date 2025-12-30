/*
    encapsulation means bundling of data members & functions inside a single class
    helps in data hiding and data abstraction

    data hiding is a way of restricting access of data members by hiding implementation details 
*/

#include <bits/stdc++.h>
using namespace std;

class Rectangle {
    
    public:
    int length;
    int breadth;

    Rectangle(int len, int brth) : length(len), breadth(brth) {}

    int getArea() {
      return length * breadth;
    }
};

class Square {
   
    private:
    int length;

    public:
    void setLength(int len) {
      length = len;
    }

    int getLength() {
      return length;
    }

    int getArea() {
      return length * length;
    }
};

int main() {

    Rectangle rect(8, 6);  
    cout << "Area = " << rect.getArea();

    Square sq;
    sq.setLength(8);
    cout << "Length = " << sq.getLength() << endl;
    cout << "Area = " << sq.getArea();

  return 0;
}