/*
    function template:

    templates allows to write generic programs
    can create single function to work with different data types by using template
*/

#include <bits/stdc++.h>
using namespace std;

template <typename T>
T add(T num1, T num2) {
    return (num1 + num2);
}

int main() {
    
    int res1;
    double res2;

    // calling with int parameters
    res1 = add<int>(2, 3);
    cout << "2 + 3 = " << res1 << endl;

    // calling with double parameters
    res2 = add<double>(2.2, 3.3);
    cout << "2.2 + 3.3 = " << res2 << endl;

    return 0;
}