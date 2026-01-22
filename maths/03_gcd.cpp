#include <bits/stdc++.h>
using namespace std;

int getGCD(int n1, int n2){
    int gcd = 1;

    for(int i =1; i <= min(n1, n2); i++){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }
    return gcd;
}

/*
    Euclidean Algorithm:
    It operates on the principle that the GCD of two numbers remains
    the same even if the smaller number is subtracted from the larger number.

    To find the GCD of n1 and n2 where n1 > n2:
    1. Repeatedly subtract the smaller number from the larger number until one of them becomes 0.
    2. Once one becomes 0, the other is the GCD of the original numbers.

*/

int findGCD(int a, int b){
    
    while(a > 0 && b > 0){

        if(a > b){
            a = a % b;
        } else {
            b = b % a;
        }
    }

    if(a == 0){
        return b;
    } else {
        return a;
    }
}

int main(){

    int n1, n2, n3, n4;
    cout << "Enter number one: " << endl;
    cin >> n1;
    cout << "Enter number two: " << endl;
    cin >> n2;
    cout << "Enter number three: " << endl;
    cin >> n3;
    cout << "Enter number four: " << endl;
    cin >> n4;

    int gcd1 = getGCD(n1, n2);
    int gcd2 = getGCD(n3, n4);

    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd1 << endl;
    cout << "GCD of " << n3 << " and " << n4 << " is: " << gcd2 << endl;

    return 0;
}