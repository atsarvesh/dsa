/*
    functor (function object) is a class or struct that can be called like a function

    overloads a function call operator
*/

#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;


int main() {

    /*
        commonly used algos:
        sort = sort elements of container
        copy = copy elements within given range
        move = move given range of elements
        swap = exchange values of two subjects
        merge = merge sorted ranges
        replace = replace value of element
        remove = remove element
    */

    // sort vector in asc order

    vector<int> vec = {4,2,3,1,5};

    sort(vec.begin(),vec.end()); // 1 2 3 4 5

    for(int n: vec){
        cout << n << " ";
    }

    // copy vector elements

    vector<int> src = {1, 2, 3, 4, 5};

    vector<int> dest(5);
    
    copy(src.begin(), src.end(), dest.begin());

    for(int n : dest) {
        cout << n << " ";
    }
    
    // move vector elements

    vector<string> source = {"apple", "banana", "cherry"};
    vector<string> destination(3);

    cout << "before move:" << endl;
    cout << "source: ";
    for(const string& str : source) {
        cout << str << " ";
    }
    cout << endl;

    cout << "destination: ";
    for(const string& str : destination) {
        cout << str << " ";
    }
    cout << endl;

    move(source.begin(), source.end(), destination.begin());

    cout << "after move:" << endl;
    cout << "source: ";
    for(const string& str : source) {
        cout << str << " ";
    }
    cout << endl;

    cout << "destination: ";
    for(const string& str : destination) {
        cout << str << " ";
    }
    cout << endl;

    // swap contents of two vectors

    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {4, 5, 6};

    cout << "before swap:" << endl;
    cout << "vec1: ";
    for(int num : vec1) {
        cout << num << " ";
    }
    cout << endl;

    cout << "vec2: ";
    for(int num : vec2) {
        cout << num << " ";
    }
    cout << endl;

    swap(vec1, vec2);

    cout << "after swap:" << endl;
    cout << "vec1: ";
    for(int num : vec1) {
        cout << num << " ";
    }
    cout << endl;

    cout << "vec2: ";
    for(int num : vec2) {
        cout << num << " ";
    }
    cout << endl;

    // merge two vectors

    vector<int> result(6);

    cout << "before merge:" << endl;
    cout << "vec1: ";
    for(int num : vec1) {
        cout << num << " ";
    }
    cout << endl;

    cout << "vec2: ";
    for(int num : vec2) {
        cout << num << " ";
    }
    cout << endl;

    merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), result.begin());

    cout << "after merge:" << endl;
    cout << "result: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;

    // replace vector element

    vector<int> vec3 = {4, 2, 3, 2, 5, 6, 8};

    cout << "Before: ";
    for(int num : vec3) {
        cout << num << " ";
    }
    cout << endl;

    // replace 2 with 99
    replace(vec3.begin(), vec3.end(), 2, 99);

    cout << "after: ";
    for(int num : vec3) {
        cout << num << " ";
    }
    cout << endl;

    // delete value from given range

    cout << "before deletion: ";
    for(int num : vec3) {
        cout << num << " ";
    }
    cout << endl;

    remove(vec3.begin(), vec3.end(), 5);

    cout << "after deletion: ";
    for(int num : vec3) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
