/*
    virtual function is a member function in base class
    that we expect to redefine in derived class

    override is useful to avoid common mistakes while using virtual functions

    virtual destructor:
    when a derived class involves dynamic memory allocation
    we have to deallocate the memory in its destructor
*/

#include <bits/stdc++.h>
using namespace std;

class Base {
   public:
    virtual void print() {
        cout << "base function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() override {
        cout << "derived function" << endl;
    }
};

// virtual destructor

class Shape {
    public:
        Shape() = default;

        virtual double get_area() const {
            return 0.0;
        }

        ~Shape() = default;
};

class Square: public Shape {
    private:
        double* length;

    public:
        Square(double len = 1.0): length(new double{len}) {
        }

        double get_area() const override {
            return *length * *length;
        }

        ~Square() {
            delete length;
             cout << "deleted length" << endl << endl;
        }
};

// use of virtual functions

class Employee {
        
        private:
        string first_name;
        string last_name;
    
        public:
        Employee(string fname, string lname): first_name(fname), last_name(lname) {
        }

        string get_full_name() {
            return first_name + " " + last_name;
        }

        // virtual function to allow overriding
        virtual void print_wage() {
            cout << "employee's wage structure is not declared yet" << endl;
        }

        // virtual destructor
        virtual ~Employee() {
        }
};

class HourlyEmployee: public Employee {
        
        private:
        double hourly_wage;
    
        public:
        HourlyEmployee(string fname, string lname, double wage_per_hour): Employee(fname, lname), hourly_wage(wage_per_hour) {
            
        }
        
        // overrides the function and provides proper implementation
        // according to the wage structure of HourlyEmployee
        void print_wage() override {
            cout << "The hourly wage of " << get_full_name() << " is " << hourly_wage << endl;
        }
};

class RegularEmployee: public Employee {
    
        private:
        double monthly_wage;
    
        public:
        RegularEmployee(string fname, string lname, double wage_per_month): Employee(fname, lname), monthly_wage(wage_per_month) {
            
        }
        
        // overrides the function and provides proper implementation
        // according to the wage structure of RegularEmployee
        void print_wage() override {
            cout << "The monthly wage of " << get_full_name() << " is " << monthly_wage << endl;
        }
};

int main() {

    Derived derived1;

    // pointer of Base type that points to derived1
    Base* base1 = &derived1;

    // calls member function of Derived class
    base1->print();

    // pointer to Square class pointing to Square object
    Square* shape1 = new Square(1.5);
    cout << "area of square: " << shape1->get_area() << endl;
    
    // invokes Square class destructor
    delete shape1;

    // pointer to Shape class pointing to Square object
    Shape* shape2 = new Square(2.5);
    cout << "area of square: " << shape2->get_area() << endl;
    
    // invokes Shape class destructor
    delete shape2;

    // declare a vector to store Employee* pointers pointing to dervied class objects
    vector<Employee*> employees {new HourlyEmployee("John", "Doe", 13.5), new RegularEmployee("Jane", "Smith", 3000.7)};
    for(Employee* employee: employees) {
        employee->print_wage();
    }

    return 0;
}