/*
    store elements like a multiset but without any specific order 
*/

#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main() {

    unordered_multiset<int> new_multiset = {5, 3, 8, 1, 3};
    
    for(int val : new_multiset) {
        cout << val << " ";
    }

    // insert elements to unordered multiset

    unordered_multiset<int> my_unordered_multiset; 

    my_unordered_multiset.insert(10);
    my_unordered_multiset.insert(30);
    my_unordered_multiset.insert(20);
    my_unordered_multiset.insert(50);
    my_unordered_multiset.insert(40);
    my_unordered_multiset.insert(50);

    for (int i : my_unordered_multiset) {
        cout << i << "  ";
    }

    return 0;
}

/*
    other methods:
    erase
    clear
    find
    count
    empty size

*/