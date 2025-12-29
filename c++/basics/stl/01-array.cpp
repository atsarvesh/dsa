#include <bits/stdc++.h>
#include <array>
using namespace std;

int main(){
    
    // initialization
    array <int , 5> numbers {1, 2, 3, 4, 5}; // type, size
    array <float, 5> nums = {2, 4, 6, 8, 10};

    cout << "The elements are: " << endl;

    // use a ranged for loop
    for(const int num: numbers){
        cout << num << " ";
    }
    for(const int num: nums){
        cout << num << " ";
    }

    // access 
    cout << nums[3];
    cout << numbers.at(4);

    // modify
    nums[2] = 76;
    numbers.at(1) = 34;

    // is array empty 
    nums.empty();

    // number of elements in array
    nums.size();

    cout << "size of array is: " << numbers.size() << '\n';

    if(numbers.empty()){
        cout << "array is empty";
    }
    else{
        cout << "array is not empty";
    }

    // fill with same value
    array <int, 4> a;

    a.fill(8);

    cout << "The elements are: ";
    for(const int& elt: a){
        cout << elt << " ";
    }

    // implement stl algorithm
    array<int, 5> age = {45, 23, 66, 87, 21};

    // sorting
    sort(age.begin(), age.end());

    // print the sorted array
    cout << "The sorted array is: ";
    for(const int elt: age){
        cout << elt << " ";
    }
    cout << endl;

    // searching
    // checking whether the number 5  exists or not
    auto found = find(age.begin(), age.end(), 5);

    if (found != age.end()) cout << "5 was Found" << endl;
    else cout << "5 was Not Found" << endl;

    // summing
    int sum = accumulate(age.begin(), age.end(), 0);

    cout << "The sum of the element of array is : " << sum;
}