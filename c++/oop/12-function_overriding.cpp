/*

    - inheritance allows to create derived class from base class
    - derived class inherit features of base class
    
    if we define same function in both base class and derived class
    when we call this function using the object of derived class, function of derived class executes
    
    - the member function in derived class shadows member function in base class 
    - this is shadowing base class member function

*/

#include <bits/stdc++.h>
using namespace std;

class Base {
   public:
    void print() {
        cout << "base function" << endl;
    }
    void greet() {
        cout << "hi from base" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "derived function" << endl;
    }
    void greet() {
        cout << "hi from derived" << endl;
        // call overridden function
        Base::greet();
    }
};

int main(){

    Base base1;
    base1.print();

    Derived derived1, derived2;
    Derived derived3, derived4;
    
    derived1.print();

    // access print() function of the Base class
    derived2.Base::print();
    derived3.greet();

    // pointer of Base type that points to derived1
    Base* ptr = &derived1;

    // call function of Base class using ptr
    ptr->print();

    return 0;
}