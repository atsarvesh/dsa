/*
    iterator:
    is a pointer-like object that represents element's position in container
    used to iterate over elements in container

    cannot use iterators with containers with mismatching data types


*/

#include <bits/stdc++.h>
#include <iterator>
#include <vector>
#include <forward_list>
#include <list>

using namespace std;

int main(){

    vector<int>::iterator vec_itr; // vector iterator

    map<char, int>::iterator map_itr; // map iterator

    vector<string> lang = {"c++","go","java"};

    vector<string>::iterator lang_itr;

    for(lang_itr = lang.begin(); lang_itr != lang.end(); lang_itr++){
        cout << (*lang_itr) << " , "; 
    }

    /*
        fundamental operations:
        *itr - returns element at position
        itr->m - member val of obj pointed by the iterator ~ (*itr).m
        ++itr - moves to next position
        --itr - moves to previous position
        itr+i - moves by i positions
        itr1 == itr2 - returns true if same
        itr1 != itr2 - returns true if not same
        itr1 = itr2 - assign itr1 to itr2
    */

    // input iterator - able to read/process some values while iterating forward

    istream_iterator<int> input_itr(cin);

    // output iterator - able to write some values while iterating forward

    ostream_iterator<int> output_itr(cout, " ");

    // forward iterator - able to read/write some values while iterating forward ~ of class forward_list

    forward_list<int> num {1,2,3,4,5,6,7,8};

    forward_list<int>::iterator itr = num.begin();

    while (itr != num.end()){
        int orig_val = *itr;
        *itr = orig_val * 2;
        itr++;
    }
    
    for(int n : num){
        cout << n << ", ";
    }

    // bidirectional iterator - able to iterate both forward and backward ~ list, set, multiset, map, multimap iterators

    list<int> nums {15,26,37,48};

    list<int>::iterator itr1 = nums.begin();

    cout << "moving forward: " << endl;
    while (itr1 != nums.end()){
        cout << *itr1 << ", ";
        itr1++;
    }

    cout << "moving backward: " << endl;
    while (itr1 != nums.begin()){
        if(itr1 != nums.end()){
        cout << *itr1 << ", ";
        }
        itr1--;
    }

    cout << *itr1 << endl;

    // random access iterator - all properties of bidirectional iterators along with random access

    vector<int> vec {1,2,3,4};

    vector<int>:: iterator first_itr = vec.begin();
    vector<int>:: iterator last_itr = vec.end()-1;

    cout << "first element: " << *first_itr << endl;
    cout << "second element: " << first_itr[1] << endl;

    cout << "second last element: " << *(last_itr-1) << endl;
    cout << "last element: " << *(last_itr) << endl;

    // constant iterator

    vector<int>:: const_iterator itr2 = vec.begin();

    /*
        few methods:
        begin - returns itr that points to first element in the container
        rbegin - returns reverse itr that points to last element in the container
        cbegin - returns const itr that points to firstt element in the container
        end - returns itr that points to theorectical element immediately following last element in the container
        rend - returns reverse itr that points to theorectical element preceding first element in the container
        cend - returns const itr that points to theorectical element immediately following last element in the container
        advance - moves itr forward and backward by specified nos of positions // advance(itr, n); or advance(itr, -n);
        next - returns itr to element that is n positions away from current itr // next(itr, n);
        previous - returns itr to element that is n positions before current itr // previous(itr, n);
    */

    return 0; 
}