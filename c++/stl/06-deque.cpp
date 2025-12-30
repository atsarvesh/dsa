/* 
    doubly ended queue sequential container

    in deque, we can insert and remove elements from both front and rear

*/
#include <bits/stdc++.h>
#include <deque>
using namespace std;

// function prototype
void display_deque(deque<int>);

int main(){
    
    // initialization
    deque <int> numbers {1, 2, 3, 4, 5};
    deque <float> nums = {2, 4, 6, 8, 10};

    // create queue using fill constructor method
    deque<int> dq(5, 12); // size 5 & values 12 ~ {12, 12, 12, 12, 12}

    // create queue using range method initialization ~ copy one deque to another
    deque<int> dq1 = {2,5,3,8,7,4,6,1,9};
    deque<int> dq2(dq1.begin(),dq1.end()); // copy from start to end


    cout << "queue : " << endl;

    // use a ranged for loop
    for(int num: numbers){
        cout << num << " , ";
    }
    for(int num: nums){
        cout << num << " , ";
    }

    // insert elements to deque
    deque<int> nums1 {2,3};
    
    cout << "initial deque: ";
    for(const int& num: nums1){
        cout << num << " , ";
    }

    nums1.push_back(4); // adds 4 to back
    nums1.push_back(1); // adds 1 to back
    nums1.push_front(6); // adds 6 to front
    nums1.push_front(8); // adds 8 to front

    cout << "final deque: ";
    for(const int& num: nums1){
        cout << num << " , ";
    }

    // access elements from deque

    cout << "front element: " << nums1.front() << endl;
    cout << "back element: " << nums1.back() << endl;
    cout << "element at index 1: " << nums1.at(1) << endl;
    cout << "element at index 0: " << nums1[0];

    // modify elements of deque

    nums1.at(0) = 3;
    nums1.at(2) = 4;

    cout << "updated deque: ";
    for(const int& num: nums1){
        cout << num << " , ";
    }

    // remove elements from deque

    nums1.pop_back(); // remove element from back

    cout << "deque after pop_back(): ";
    display_deque(nums1);

    nums1.pop_front(); // remove element from back

    cout << "deque after pop_front(): ";
    display_deque(nums1);

    // is deque empty 
    nums.empty();

    // remove element at specific index
    nums.erase(nums.begin() + 1);

    // remove at certain range
    nums.erase(nums.begin() + 1, nums.begin() + 3);

    // number of elements in deque
    nums.size();

    if(numbers.empty()){
        cout << "array is empty";
    }
    else{
        cout << "array is not empty";
    }

    // deque iterators ~ used to point to the memory address of deque element
    deque<int>::iterator dq_itr;
    
    dq_itr = nums1.begin();
    
    int first_element = *dq_itr;
    cout << "nums[0] = " << first_element << endl;
    
    // make iterator point to element at index 1
    dq_itr = nums1.begin() + 1; 
    int element_index1 = *dq_itr; 
    cout << "nums1[1] = " << element_index1 << endl;

    // make iterator point to last element
    dq_itr = nums1.end() - 1; 
    int last_element = *dq_itr; 
    cout << "nums[2] = " << last_element;

}

// utility function
void display_deque(deque<int> deq){
    for(const int& num : deq){
        cout << num << " , ";
    }
}