#include <bits/stdc++.h>
using namespace std;

void print_name(string name, int n) {
    if (n == 0) {
        return;
    }
    cout << name << endl;
    print_name(name, n - 1);
}

int main() {

    cout << "Enter your name: ";
    string name;
    getline(cin, name); // Read the name from input
    int n;
    cout << "Enter the number of times to print your name: ";
    cin >> n;
    print_name(name, n);
    return 0;
}