/*
    list stores elements randomly in unrelated locations

    to maintain sequential order a list element includes two limks:
    1. one points to previous element
    2. another points to next element

    also implements doubly linked list data structure to iterate forward and backward
*/

#include <bits/stdc++.h>
#include <list>
using namespace std;

int main(){

    list<int> num = {1,2,3,4,5};
    list<char> vowels  {'a','e','i','o','u'};

    cout << "list elements: ";
    for(int number : num) {
        cout << number <<", ";
    }

    // add elements to list
    
    list<int> nums = {1,2,3};

    cout << "initial list: ";
    for(int number : nums) {
        cout << number <<", ";
    }

    nums.push_front(8); // add element at beginning
    nums.push_back(9); // add element at end

    cout << "final list: ";
    for(int number : nums) {
        cout << number <<", ";
    }

    // access list elements

    cout << "first element: " << nums.front() << endl;
    cout << "last element: " << nums.back() << endl;

    // delete list elements

    nums.pop_front(); // remove first element
    nums.pop_back(); // remove last element

    cout << "list after popping: ";
    for(int number : nums) {
        cout << number <<", ";
    }

    // other functions

    nums.reverse(); // reverse the elements in list
    nums.sort(); // sort
    nums.unique(); // remove duplicate elements
    nums.empty();
    nums.size();
    nums.clear(); // clear all values from list
    // merge(); merges two sorted arrays

    //iterate throught iterator

    list<int> numbers = {1,2,4,8,7,5};

    list<int>:: iterator itr = numbers.begin();
    ++itr;
    cout << "second element :" << *itr;

    return 0;
}