// use a reference to create an alias for a variable

#include <bits/stdc++.h>

using namespace std;

int main() {

    string city = "Paris";

    // create a reference to the variable
    string& ref_city = city;
    
    // display the variable
    cout << "Variable Value: " << city << endl;
    cout << "Reference Value: " << ref_city << endl;

    ref_city = "Mumbai";
    cout << "Variable Value: " << city << endl;
    cout << "Reference Value: " << ref_city << endl;

    return 0;
}