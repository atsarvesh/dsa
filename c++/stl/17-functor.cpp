/*
    functor (function object) is a class or struct that can be called like a function

    overloads a function call operator
*/

#include <bits/stdc++.h>
using namespace std;

class Greet {

  public:    
    // overload function call
    void operator()() {
      cout << "Hello World!";
    }
};

// functor with return type and parameter
class Add {

    public:
    int operator() (int a, int b){
        return a  + b;
    }
};

// functor with member variable

class Add_to_Sum {

    private:
    int initial_sum;

    public:
    
    //constructor
    Add_to_Sum(int sum){
        initial_sum = sum;
    }

    // overload function call operator
    int operator() (int num){
        return initial_sum +  num;
    }
};

int main() {

  // create an object
  Greet greet;
  Add add;

  // call the object as a function
  greet();
  int sum = add(100,78);

  cout << sum;

  Add_to_Sum add = Add_to_Sum(100);
//   int final_sum = add(78);
//   cout << final_sum;

  return 0;
}

/*
    predefined functors: <functional>
    1. arithmetic functors - plus, minus, multiplies, divides, modulus, negate
    2. relational functors - equal_to, not_equal_to, greater, greater_equal, less, less_equal
    3. logical functors - logical_and, logical_or, logical_not
    4. bitwise functors - bit_and, bit_or, bit_xor
*/
