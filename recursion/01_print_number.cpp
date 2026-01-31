#include <bits/stdc++.h>
using namespace std;

void print_number(int n) {
    if (n == 0) {
        return;
    }
    print_number(n - 1);
    cout << n << " ";
}

// forward recursion

void pr_no(int cur, int n) {
    if (cur > n) {
        return;
    }
    cout << cur << " ";
    pr_no(cur + 1, n);
}

// backtracking

void pr_no_back(int cur, int n) {
    if (cur > n) {
        return;
    }
    pr_no_back(cur + 1, n);
    cout << cur << " ";
}

int main() {
    cout << "Enter number one: ";
    int n1;
    cin >> n1;
    cout << "Enter number two: ";
    int n2;
    cin >> n2;
    cout << "Enter number three: ";
    int n3;
    cin >> n3;
    print_number(n1);
    pr_no(1, n2);
    pr_no_back(1, n3);

    cout << endl;
    return 0;
}