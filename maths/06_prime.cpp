#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n) {
    
    int cnt = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cnt++;
        }
    }

    if (cnt == 2) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool isPrime = checkPrime(n);  // Function call to check if the number is prime

    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
