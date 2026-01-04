/*
    namespace is collection of related names or identifiers (function, class, variable)
    - helps to seperate these identifiers from similar identifiers in other namespaces or global namespace
    - way to prevent naming conflicts within program especially in large projects
*/

#include <bits/stdc++.h>
using namespace std;

namespace dbl {
    double var;
}

namespace one {

    void display(){
        cout << "namespace one" << endl;
    }

    namespace one_one{
        void display(){
        cout << "namespace one_one" << endl;
        }
    }
}

namespace two {
    void display(){
        cout << "namespace two" << endl;
    }
}

void display(){
        cout << "not a namespace" << endl;
    }

int main(){

    int var = 5;

    // use created namespace to avoid naming conflict
    dbl::var = 6.77;

    one::display();
    one::one_one::display();
    two::display();
    display();

    cout << "dbl var = " << dbl::var << endl;
    cout << "main var = " << var << endl;

    return 0;
}