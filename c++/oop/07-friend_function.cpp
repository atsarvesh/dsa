/*
    data hiding restricts access of private members from outside of class
    protected members can only be accessed by derived classes & are inaccessible from outside

    friend functions break this rule and allow us to access member functions from outside class
*/

// C++ program to demonstrate the working of friend function

#include <bits/stdc++.h>
using namespace std;

class Distance {
    private:
        int meter;
        
        // friend function
        friend int addFive(Distance);

    public:
        Distance() : meter(0) {}
        
};

// forward declaration
class ClassB;

class ClassA {
    
    public:
        // constructor to initialize numA to 12
        ClassA() : numA(12) {}
        
    private:
        int numA;
        
         // friend function declaration
         friend int add(ClassA, ClassB);
};

class ClassB {

    public:
        // constructor to initialize numB to 1
        ClassB() : numB(1) {}
    
    private:
        int numB;
 
        // friend function declaration
        friend int add(ClassA, ClassB);
};

// friend function definition
int addFive(Distance d) {

    //accessing private members from the friend function
    d.meter += 5;
    return d.meter;
}

// access members of both classes
int add(ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}

int main() {

    Distance D;
    cout << "Distance: " << addFive(D);

    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA, objectB);
    
    return 0;
}