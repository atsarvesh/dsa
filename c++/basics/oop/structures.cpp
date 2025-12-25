// structure are collection of variables of different types and member functions under a single name

#include <bits/stdc++.h>
using namespace std;

struct Distance {
    int feet;
    float inch;
};

struct Person {
    string fname;
    string lname;
    int age;
    float salary;

    //member functions
    void display(){
        cout << "\nDisplaying Information." << endl;
        cout << "First Name: " << fname << endl;
        cout << "Last Name: " << lname << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary;
    }
};

// function with struct variable type as argument
void display_info(const Person&);

// function
Person get_data();
void display_data(const Person&);

int main(){

    Distance d;
    // pointer to structure
    Distance* ptr = &d;

    cout << "Enter feet: ";
    cin >> (*ptr).feet;
    // cin >> ptr->feet; ~ arrow operator
    cout << "Enter inch: ";
    cin >> (*ptr).inch;
    // cin >> ptr->inch; ~ arrow operator

    cout << "Distance = " << (*ptr).feet << "feet" << (*ptr).inch << "inches" << endl;

    Person p1; // struct variable
    Person p2;
    Person p {"sarvesh","noname", 17, 23400};
    Person p3 = get_data();

    cout << "Enter first name of p1: ";
    cin >> p1.fname;
    cout << "Enter last name of p1: ";
    cin >> p1.lname;
    cout << "Enter age of p1: ";
    cin >> p1.age;
    cout << "Enter salary of p1: ";
    cin >> p1.salary;

    cout << "Enter first name of p2: ";
    cin >> p2.fname;
    cout << "Enter last name of p2: ";
    cin >> p2.lname;
    cout << "Enter age of p2: ";
    cin >> p2.age;
    cout << "Enter salary of p2: ";
    cin >> p2.salary;

    // access members
    cout << "\nDisplaying Information." << endl;
    cout << "First Name: " << p1.fname << endl;
    cout << "Last Name: " << p1.lname << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;

    // access member function
    p2.display();

    display_info(p);

    display_data(p3);

    return 0;
}

void display_info(const Person& p){
    cout << "\nDisplaying Information." << endl;
    cout << "First Name: " << p.fname << endl;
    cout << "Last Name: " << p.lname << endl;
    cout << "Age: " << p.age << endl;
    cout << "Salary: " << p.salary;
}

// function to return structure variable
Person get_data() {

    Person p3;
    
    string firstname;
    string lastname;
    int age;
    float salary;
    
    cout << "Enter first name: ";
    cin >> firstname;
    cout << "Enter last name: ";
    cin >> lastname;
    cout << "Enter age: ";
    cin >> age;

    cout << "Enter salary: ";
    cin >> salary;
    
    // return structure variable
    return Person{firstname, lastname, age, salary};
}

void display_data(const Person& p3) {
    cout << "\nDisplaying Information." << endl;
    cout << "First Name: " << p3.fname << endl;
    cout << "Last Name: " << p3.lname << endl;
    cout << "Age: " << p3.age << endl;
    cout << "Salary: " << p3.salary;
}
