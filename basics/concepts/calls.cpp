/*
    pass by value

    actual value is passed as an argument to the function
*/

/*
    pass by reference

    references of actual parameters are passed to the functions rather than values

    & denotes taht function accepts references as its parameters
*/ 

#include <bits/stdc++.h>
using namespace std;

// function definition to swap values
void swap(int& n1, int& n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

// pass by const reference when values of var don't need to change
int add(const int& num1, int& num2){
    return num1 + num2;
}
int main() {

    int a = 1, b = 2;

    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // call function to swap numbers
    swap(a, b);

    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    int num1, num2;
    cout << "enter num1: ";
    cin >> num1;
    cout << "enter num2";
    cin >> num2;
    int sum = add(num1,num2);
    cout << "sum is" << sum;

    return 0;
}