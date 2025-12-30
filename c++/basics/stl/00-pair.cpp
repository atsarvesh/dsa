#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    
    pair <int, int> pair1;

    pair1.first = 2;

    pair1.second = 10;

    pair <int, int> pair2 = make_pair(4, 12);

    pair <int, string> pair3(3, "three");

    pair <int, int> pair4(5, 18);

    cout << "First pair is " << pair1.first << " " << pair1.second << '\n';
    cout << "Second pair is " << pair2.first << " " << pair2.second << '\n';
    cout << "Third pair is " << pair3.first << " " << pair3.second << '\n';
    cout << "Fourth pair is " << pair4.first << " " << pair4.second << '\n';
    cout << "Operators on pair, 1 represent true, 0 represent false\n";

    cout << "After performing pair1 <= pair2, result is " << (pair1 <= pair2) << '\n';
    cout << "After performing pair1 >= pair2, result is " << (pair1 >= pair2) << '\n';
    cout << "After performing pair1 == pair2, result is " << (pair1 == pair2) << '\n';
    cout << "After performing pair1 != pair2, result is " << (pair1 != pair2) << '\n';
    
    pair1 = pair4;

    cout << "After performing pair1 = pair4, contents of pair1: " << pair1.first << " " << pair1.second << '\n';
    cout << "Use of swap function with pair\n";
    cout << "Before swapping:\n";
    cout << "Contents of pair1 = " << pair1.first << " " << pair1.second << "\n";
    cout << "Contents of pair2 = " << pair2.first << " " << pair2.second << "\n";
    
    pair1.swap(pair2);

    cout << "After swapping:\n";
    cout << "Contents of pair1 = " << pair1.first << " " << pair1.second << "\n";
    cout << "Contents of pair2 = " << pair2.first << " " << pair2.second << "\n";
    
    return 0;
}