/*
    multilevel ->
    - derive a class from base class
    - derive a class from derive class

    multiple ->
    - derive a class from more than one parent class

    hierrchical ->
    - more than one class is inherited from base class
    - all features are common in child class are included in base class

*/

#include <bits/stdc++.h>
using namespace std;

// multilevel inheritance

class X {

    public:
    void display(){
        cout << "base class content";
    }
};

class Y : public X{};

class Z : public Y{};

// multiple inheritance

class Mammal {

    public:
    Mammal(){
        cout << "mammals can give birth" << endl;
    }
};

class WingedAnimal {

    public:
    WingedAnimal(){
        cout << "winged animal can flap" << endl;
    }
};

class Bat: public Mammal, public WingedAnimal {};

// hierarchical inheritance

class Animal {
public:
    void info() {
        cout << "i am an animal" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "i am a dog. woof woof." << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "i am a cat. meow." << endl;
    }
};

int main(){

    Z obj;
    obj.display();

    Bat b1;

    Dog dog1;
    cout << "dog class:" << endl;
    dog1.info();
    dog1.bark();

    Cat cat1;
    cout << "\ncat class:" << endl;
    cat1.info();
    cat1.meow();

    return 0;
}