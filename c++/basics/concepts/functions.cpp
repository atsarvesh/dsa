#include <bits/stdc++.h>
using namespace std;

// without parameters
void greet() {
    cout << "Hello there!";
}

// with parameters
void displayNum(int n1, float n2) {
    cout << "The int number is " << n1;
    cout << "The double number is " << n2;
}

// return function
int add(int a, int b) {
    return (a + b);
}

// function prototype
int sub(int, int);

// default arguments
void display(char = '*', int = 3);

/*
    function overloading
*/

float absolute(float var){
    if(var<0.0){
        var = -var;
    }
}

int absolute(int var){
    if(var<0){
        var = -var;
    }
}

// inline functions
inline void displayNum(int num){
    cout << num << endl;
}

// recursion - function calls itself
int factorial(int);

int main() {

    // calling
    greet();
    displayNum(2,4);
    add(25,34);

    int count = 5;
    cout << "no argument";
    display();
    cout << "first argument";
    display('#');
    cout << "both arguments";
    display('$', count);

    cout << "absoulte of -5" << absolute(-5) << endl;
    cout << "absoulte of 5.5" << absolute(5.5f) << endl;

    displayNum(55);
    displayNum(888);

    int n, res;
    cout << "enter a non negative number: ";
    cin >> n;
    res = factorial(n); // function call



    return 0;
}

// function definition
int sub(int a, int b) {
    return (a - b);
}

void display(char c, int count) {
    for(int i = 1; i <= count; ++i)
    {
        cout << c;
    }
    cout << endl;
}

int factorial(int n){
    if(n>1){
        return n * factorial(n-1); // recursive call
    } else {
        return 1;
    }
}