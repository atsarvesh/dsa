/*
    sets store unique elements of the same type in a sorted manner

    value of every element in a set is unique, hence it acts as a key itself

    properties:
    1. unique - no 2 elements scan be equal
    2. immutable - can't change value of existing elements
    3. sorted - follows a specific strict weak ordering
    4. associative - element are referenced using their keys and not their index or position
*/

#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){
    
    set<int> my_set1 = {2,3,5,17,1, 5, 11,13, 9,23,27,7,};

    for(int val : my_set1){
        cout << val << " ";
    }

    // sort in descending order

    set<int, greater<int>> my_set2 = {5,3,8,1,3};

    for(int val : my_set1){
        cout << val << " ";
    }

    // add values to set

    set<int> my_set;

    my_set.insert(10);
    my_set.insert(40);
    my_set.insert(20);
    my_set.insert(40);
    my_set.insert(50);
    my_set.insert(30);

    for(int val : my_set){
        cout << val << " ";
    }

    // check if element exist in set

    int num = 40;
    if(my_set.count(num) == 1){
        cout << num << "exists" << endl;
    } else {
        cout << num << "doesn't exist" << endl;

    }

    num = 60;
    if(my_set.count(num) == 1){
        cout << num << "exists" << endl;
    } else {
        cout << num << "doesn't exist" << endl;

    }

    // delete elements from set

    cout << "set before deletion" << endl;

    for(int i : my_set){
        cout << i << " ";
    }

    my_set.erase(10);
    my_set.erase(20);

    cout << "set after deletion" << endl;

    for(int i : my_set){
        cout << i << " ";
    }

    my_set.clear(); // clears all

    cout << "set after clear" << endl;

    for(int i : my_set){
        cout << i << " ";
    }

    // check if set is empty

    cout << "empty: " << my_set1.empty();
    cout << "empty: " <<  my_set.empty();

    // check set size

    cout << "size: " << my_set2.size();
    cout << "size: " << my_set.size();

    return 0;
}