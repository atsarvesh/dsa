/*
    inheritance allows to derive a child class from a base class in different access modes.
    - private -> makes public & protected members of base class private in derived class 
      (private member sof base class are inaccessible to derived class)
    - protected -> makes public & protected members of base class protected in drived class
    - public -> make public members as public and protected members as protected in derived class

*/

#include <bits/stdc++.h>
using namespace std;

class Base {
    
    private:
    int pvt = 1;

    protected:
    int pct = 2;

    public:
    int pub = 3;

    // to access private member
    int getPvt(){
        return pvt;
    }
};

class PublicDerived : public Base {
    
    public:
    // to access protected member
    int getPct(){
        return pct;
    }
};

class ProtectedDerived : protected Base {
    
    public:
    //  to access protected member
    int getPct() {
      return pct;
    }

    // to access public member
    int getPub() {
      return pub;
    }
};

class PrivateDerived : private Base {
    
    public:
    // function to access protected member
    int getPct() {
      return pct;
    }

    // function to access private member
    int getPub() {
      return pub;
    }
};

int main(){

    PublicDerived obj1;
    cout << "private = " << obj1.getPvt() << endl;
    cout << "protected = " << obj1.getPct() << endl;
    cout << "public = " << obj1.pub << endl;

    ProtectedDerived obj2;
    cout << "private cannot be accessed." << endl;
    cout << "protected = " << obj2.getPct() << endl;
    cout << "public = " << obj2.getPub() << endl;

    PrivateDerived obj3;
    cout << "private cannot be accessed." << endl;
    cout << "protected = " << obj3.getPct() << endl;
    cout << "public = " << obj3.getPub() << endl;

    return 0;
}