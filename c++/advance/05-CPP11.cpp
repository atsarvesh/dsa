#include <bits/stdc++.h>
#include <memory>
#include <thread>
#include <type_traits>
using namespace std;

/*
        type traits:
        are group of templates used to gather info about types at compile time
        means before program runs, compiler can understand things about types used
        they are part of stl library <type_traits>
        type traits are implemented using class or function template
    */

template <typename T>
void process(T value){
    if(is_pointer<T>::value){/*...*/}
    else if(is_integral<T>::value){/*...*/}
}

void sayHello(){
    cout << "hello, from spawned thread\n";
}

class Complex {

    int img, real;

    public:

    Complex(int i, int r) : img(i), real(r) {}
    Complex() : Complex(0,0){
        cout << "delegating constructor" << endl;
        cout << "img = " << img << endl;
        cout << "real = " << real << endl;
    }
};

class Example{

    public:
    Example() = default; // defaulted default constructor
    Example(const Example&) = delete;
};

int main(){

    /*
        auto keyword:
        automatically deduce type of variable from its initializer
        when using auto, variable must be initialized
    */

    auto x = 42;
    auto pi = 3.14152926535;

    cout << "x: " << x << endl;
    cout << "pi: " << pi << endl;

    // ranged for loop

    vector<int> num = {1,2,3,4,5};
    
    for(const auto& n : num){
        cout << n << " ";
    }

    /*
        lambda expression allows to create anonymous functions in concise manner
        useful to pass small functions as arguments to other functions

        [capture_clause] (parameter_list) -> return_type {...}
    */

    auto add = [] (int a, int b) {
        return a + b;
    };

    int result = add(3,4);

    cout << "result: " << result << endl;

    /*
        smart pointers automatically manage memory & help prevent memory leak
        smart pointer automatically releases memory it manages when it goes out of scope

        - unique pointer = have exclusive ownership of objects they point to
        - shared pointer = allow multiple shared pointers to own a single object
    */

    shared_ptr<int> shared_pointer = make_shared<int>(42);
    unique_ptr<int> unique_pointer = make_unique<int>(3.14);

    cout << "shared_pointer: " << *shared_pointer << endl;
    cout << "unique_pointer: " << *unique_pointer << endl;

    /*
        use move() to implement move semnatics
        move semantics allow resources owned by object to be moved into another instead of copying them
        move semantics avoid keeping copies
    */

    vector<int> src = {1,2,3,4};
    vector<int> dest = move(src);

    cout << "destination vector content: ";
    for(const int n : dest){
        cout << n << " ";
    }
    cout << "destination vector size: " << dest.size();

    /*
        constexpr keyword:
        allows to specify that variable or function can be evaluated at compile-time

        
        constexpr int square(int x){
            return x * x;
        }
        int res = square(5);
        cout << "square is : " << res;
    */

    /*
        null pointer provides safer alternative to using NULL for null pointer
    */ 

    int* ptr = nullptr;

    /*
        thread support: allows to create and manage threads
    */

    thread t(sayHello);
    cout << "hello, from main thread";
    t.join();

    /*
        delegating constructor = constructor may call another constructor for same class
    */

    Complex obj;

    /*
        1. deleted function
           - member functions that have been initially marked as deleted
           - function cannot be used
           - attempt to call them will result in a compilation error

        2. defaulted function
           - used to explicitly request compiler to generate default implementations for certain member function
           - useful to take advantage of compiler-generated versions while still providing custom behavior for other function
    */

    Example obj1;

    return 0;
}