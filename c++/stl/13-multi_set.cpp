/*
    multiset are stl containers that store elements of same type in sorted order

    where multiple elements can have equivalent values ~ duplicate values are allowed

    value of each element acts as its own key

    multiset properties:
    1. associative
    2. sorted
    3. equivalent keys
    4. immutable
*/

#include <bits/stdc++.h>>
#include <set>
using namespace std;

int main(){

    multiset<int> my_multiset1 = {5, 3, 8, 1, 3};
    
    cout << "initial multiset: " << endl;
    for(int val : my_multiset1) {
        cout << val << " ";
    }

    // sort in descending order

    multiset<int, greater<int>> my_multiset2 = {5, 3, 8, 1, 3};
    
    cout << "descending order multiset: " << endl;
    for(int val : my_multiset2) {
        cout << val << " ";
    }

    // add elements to multiset

    multiset<int> my_multiset;

    my_multiset.insert(10);
    my_multiset.insert(30);
    my_multiset.insert(20);
    my_multiset.insert(50);
    my_multiset.insert(40);
    my_multiset.insert(50);

    for (int i : my_multiset) {
        cout << i << "  ";
    }

    // remove elements from multiset

    my_multiset.erase(50);
    
    cout << "multiset after erase: ";
    for (int i : my_multiset) {
        cout << i << "  ";
    }
    
    my_multiset.clear(); // delete all values from the multiset
    
    cout << "multiset after clear: ";
    for (int i : my_multiset) {
        cout << i << "  ";
    }

    return 0;
}

/*
    other methods: empty, size ~ same as set
*/