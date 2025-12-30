/*
    1. public = to create public members (data & functions)
       accessible to any part of program

    2. private = to create private members (data & functions)
       only accessed from within class
       friend classes and functions can access private members

    3. protected = to create protected members (data & functions)
       can be accessed within class and from derived class

*/

#include <bits/stdc++.h>
using namespace std;

class Sample {

   public:
    int age;

    void displayAge() {
        cout << "Age = " << age << endl;
    }
};

class Sample1 {

   private:
    int age;

   public:
    void displayAge1(int a) {
        age = a;
        cout << "Age = " << age << endl;
    }
};

class Sample3 {

   protected:
   int age;
};

class SampleChild : public Sample3 {

   public:
    void displayAge2(int a) {
        age = a;
        cout << "Age = " << age << endl;
    }

};

int main() {

    Sample obj1;
    cout << "enter your age: ";
    cin >> obj1.age;
    obj1.displayAge();

    int ageInput;
    Sample1 obj2;
    cout << "enter your age: ";
    cin >> ageInput;
    obj2.displayAge1(ageInput);

    int ageInput1;
    SampleChild child;
    cout << "enter your age: ";
    cin >> ageInput;
    child.displayAge2(ageInput1);

    return 0;
}