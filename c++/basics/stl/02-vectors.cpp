// vectors are used to store elements of similar types

// size of vector can grow dynamically ~ during the execution


#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){

    // initializer
    vector <int> vec1 = {1,2,3,4,5};

    // uniform initialization
    vector <int> vec2 { 2,4,6,8,10};

    vector <int> vec3(2,8); // 2 is size and 8 is value

    // ranged for loop
    for (const int& i : vec2){
        cout << i << " ";
    }

    cout << "vec3 = ";

    // ranged loop
    for (int i : vec3){
        cout << i << " ";
    }

    // add elements to vector

    vector <int> num = {12,23,45,5,6,67,78,90};
    cout << "initial vector: ";
    for (const int& i : num){
        cout << i << " ";
    }

    num.push_back(56);
    num.push_back(39);
    num.emplace_back(28);

    cout << "\nUpdated Vector: ";
    for (const int& i : num) {
        cout << i << "  ";
    }

    // access elements to vector

    cout << "element at index 0: " << num.at(0) << endl;
    cout << "element at index 2: " << num.at(2) << endl;
    cout << "element at index 4: " << num.at(4);

    // modify element of vector

    num.at(1) = 9;
    num.at(4) = 7;

    cout << "\nupdated vector: ";

    for (const int& i : num) {
        cout << i << "  ";
    }

    // delete elements from vector

    vector <int> prime_num { 2,3,5,7};

    cout << "initial vector: ";
    for (int i : prime_num){
        cout << i << " ";
    }

    prime_num.pop_back(); // removes last element

    cout << "\nupdated vector: ";
    for (int i : prime_num) {
        cout << i << " ";
    }
    
    // vector functions

    prime_num.size();
    prime_num.front();
    prime_num.back();
    prime_num.empty();
    prime_num.capacity();

    // prime_num.clear(); removes all elements in vector

    // vector iterators

    vector<int> :: iterator iter;

    // initialize with first element
    iter = num.begin();
    cout << "num[0] = " << *iter << endl;
    // initialize with third element
    iter = num.begin() + 2;
    cout << "num[1] = " << *iter << endl;
    // initialize with last element
    iter = num.end() - 1;
    cout << "num[4] = " << *iter << endl;

    // use iterator with for loop
    for (iter = num.begin(); iter != num.end(); ++iter){
        cout << *iter << " ";
    }

    return 0;
}