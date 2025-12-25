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


    return 0;
}