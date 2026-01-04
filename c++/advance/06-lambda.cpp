/*
    lambda expression:
    - allow to define anonymous function objects (functors)
    - functors can either be used inline or passed as an argument
    - no need to overload () operator in seperate class or struct
    - [] = lambda introducer, () = parameter list
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    // lambda function
    auto greet = [](){
        cout << "hello world";
    };
    
    // lambda function with parameters
    auto add = [] (int a, int b){
        cout << "sum = " << a + b;
    };

    // lambda function with return type
    auto opr = [] (int a, int b, string op) -> double {
        if (op == "sum"){
            return a + b;
        }
        else {
            return (a + b)/2.0;
        }
    };

    int n1 = 1;
    int n2 = 2;

    auto sum = opr(n1, n2, "sum");
    cout << "sum = " << sum << endl;
    auto avg = opr(n1, n2, "avg");
    cout << "avg = " << avg << endl;

    /*
        lambda function capture clause

        - by default, lambda function cannot access variables of enclosing function
        - to access those variables, use capture clause

        1. capture by value
        2. capture by reference

    */

    // capture by value

    int init_sum = 100;

    auto add_to_sum = [init_sum] (int num){ // capture init_sum by value
        return init_sum + num;
    };

    int fin_sum = add_to_sum(89);
    cout << "100 + 89 = " << fin_sum;

    // capture by value

    int num = 0;

    cout << "num initially: " << num << endl;

    auto increment_by_one = [&num] (){
        cout << "increment num by 1";
        num++;
    };

    // lambda function as argument in stl algorithm

    vector<int> nums = {1,2,3,4,5,8,10,12};

    int even_count = count_if(nums.begin(), nums.end(), [](int n){
        return n % 2 == 0;
    });

    cout << "there are " << even_count << " even numbers" << endl;

    // calling lambda function
    greet(); 
    add(100, 178);
    increment_by_one();

    return 0;
}