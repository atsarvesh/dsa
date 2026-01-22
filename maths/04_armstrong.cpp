#include <bits/stdc++.h>
using namespace std;

/*
    Armstrong Number:
    A number that is equal to the sum of its own digits each raised to the power of the number of digits.
    Eg N = 153 returns True as 1^3+5^3+3^3 = 1 + 125 + 27 = 153
*/

bool isArmstrong(int num){
    
    int k = to_string(num).length(); // number of digits

    int sum = 0; // each digit raised to power of no. of digits in a number

    int n = num; // copy of original number

    while( n > 0){

        int last_digit = n % 10;

        sum += pow(last_digit, k);

        n /= 10; // remove last digit
    }

    return sum == num; // if sum equals number then true

}

int main() {

    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}