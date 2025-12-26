/*
    forward list are sequence containers ordered in a strict linear sequence 
    where you can add or remove elements anywhere with constant time efficiency

    store info about their next element's location

    direct random access is not supported 
*/

#include <bits/stdc++.h>
#include <forward_list>
using namespace std;

int main(){

    forward_list<int> fwd = {2,3,4,5,6,7,8,9};

    // print elements
    for (const int& element : fwd){
        cout << element << " ";
    }

    // access front element
    fwd.front();

    // add element at front of list
    fwd.push_front(34);

    // add element after an element given index position
    auto it = fwd.begin();
    fwd.insert_after(it, 15);

    for (auto i = fwd.begin(); i != fwd.end(); ++i) {
        if (*i == 20) {
            std::vector<int> vals = {25, 30, 35};
            fwd.insert_after(i, vals.begin(), vals.end());
            break; 
        }
    }

    for (int n : fwd){
        cout << n << " ";
    } 

    // assign i.e replace old values
    forward_list<int> flist = {1, 2, 3, 4, 5};

    // replace with a range from a vector
    
    vector<int> new_vals = {10, 20, 30};
    flist.assign(new_vals.begin(), new_vals.end()); // flist is now: {10, 20, 30}

    // replace with 4 copies of the number 99
    flist.assign(4, 99);

    // replace with an initializer list
    flist.assign({5, 10, 15});

    for (int n : flist) {
        cout << n << " ";
    }

    fwd.remove(34); // removes 34

    fwd.pop_front(); // removes front element

    fwd.clear(); // deletes all contents

    return 0;
}