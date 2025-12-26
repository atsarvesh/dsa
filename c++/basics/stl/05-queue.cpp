/*
    stl queue provides functionality of queue data structure

    queue follows first in first out (fifo)
    where elements added first will be removed first
*/

#include <bits/stdc++.h>
#include <queue>
using namespace std;

// function prototype

void display_queue(queue<string> q);

int main(){

    queue<int> q;

    queue<int> num;
    queue<string> animal;
    queue<string> lang;

    // insert an element

    num.push(10);
    num.push(24);
    num.push(68);
    num.push(39);
    num.push(75);

    animal.push("cat");
    animal.push("dog");
    animal.push("sheep");
    animal.push("buffalo");
    animal.push("horse");

    lang.push("c");
    lang.push("c++");
    lang.push("go");
    lang.push("java");

    cout << "initial queue: " << endl;
    display_queue(animal);

    animal.pop();

    cout << "final queue: " << endl;
    display_queue(animal);

    // access element

    int front = num.front(); // gets element at front
    cout << "first element : " << front << endl;
    
    int back = num.back(); // gets element at back
    cout << "last element : " << back << endl;

    int size = lang.size(); // gets element at back
    cout << "lang size : " << size << endl;



  
    return 0;
}

void display_queue(queue<string> q){
    
    cout << "domestic animals are: " << endl;
    while(!q.empty()){ // check if queue is empty
        cout << q.front() << " , " ; // returns first element
        q.pop(); // removes element from front
    }
    cout << endl;
}