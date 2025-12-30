/*
    constructor overloading:
    
    overloaded constructors have the same name as of class but different arguments
    depending upon the nos and type of arguments passed, constructor is called
*/

#include <bits/stdc++.h>
using namespace std;

class Person {
   private:
    int age;

   public:
    // constructor with no arguments
    Person() {
        age = 20;
    }

    // constructor with an argument
    Person(int a) {
        age = a;
    }

    int getAge() {
        return age;
    }
};

class Room {
   private:
    double length;
    double breadth;

   public:
    // constructor with no arguments
    Room() {
        length = 6.9;
        breadth = 4.2;
    }

    // constructor with two arguments
    Room(double l, double b) {
        length = l;
        breadth = b;
    }
    // constructor with one argument
    Room(double len) {
        length = len;
        breadth = 7.2;
    }

    double calculateArea() {
        return length * breadth;
    }
};

int main() {
    
    Person person1, person2(45);

    cout << "person1 age = " << person1.getAge() << endl;
    cout << "person2 age = " << person2.getAge() << endl;

    Room room1, room2(8.2, 6.6), room3(8.2);

    cout << "when no argument is passed: " << endl;
    cout << "area of room = " << room1.calculateArea() << endl;

    cout << "\nwhen argument is passed." << endl;
    cout << "area of room = " << room2.calculateArea() << endl;

    cout << "\nwhen breadth is fixed to 7.2 and (8.2) is passed:" << endl;
    cout << "area of room = " << room3.calculateArea() << endl;

    return 0;
}