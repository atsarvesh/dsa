/*
    elements are not stored in particular sorted order

    elements are organised into buckets using hash values for quick direct access by key 

    data type of key and value may differ
*/

#include <bits/stdc++.h>
#include <unordered_map>  
using namespace std;

int main() {

    unordered_multimap<int, string> my_unordered_multimap {
        {1, "Apple"},
        {22, "Banana"},
        {1, "Apricot"},
        {3, "Avocado"}
    };

    // print the elements
    cout << "Unordered Multimap Elements:" << endl;
    for (const auto& pair : my_unordered_multimap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}

/*
    other methods:
    insert
    find
    count
    empty
    size erase clear
*/