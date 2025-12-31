/*
    inheritance allows to create new class (derived) from existing class (base)

    derived class inherits features from base class
    and it can have additional features of its own

    imheritance is an is-a-relationship (orange is a fruit)
*/

#include <bits/stdc++.h>
using namespace std;

class Animal {

    private:
    string color;

    protected:
    string type;

    public:
    void eat() {
        cout << "i can eat" << endl;
    }
    void sleep() {
        cout << "i can sleep" << endl;
    }
    void setColor(string clr){
        color = clr;
    }
    string getColor(){
        return color;
    }
};

class Dog : public Animal {
    public:
    void setType(string tp) {
        type = tp;
    }

    void displayInfo(string c) {
        cout << "i am a " << type << endl;
        cout << "my color is " << c << endl;
    }
    void bark() {
        cout << "i can bark. woof woof." << endl;
    }
};
int main(){

    Dog dog1;
    // base class members
    dog1.eat();
    dog1.sleep();
    dog1.setColor("brown");
    // derived class members
    dog1.bark();
    dog1.setType("domestic animal");
    dog1.displayInfo(dog1.getColor());

    return 0;
}