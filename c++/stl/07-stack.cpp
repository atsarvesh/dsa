/*
    provides  a functionality of stack data structure

    follows the last in first out (lifo)
    means that element added last will be removed first
*/

#include <bits/stdc++.h>
#include <stack>
using namespace std;

// function prototype
void display_stack(stack<string> st);

int main(){

    stack<string> lang;
    stack<string> colors;

    // add elmenents to stack
    lang.push("c");
    lang.push("c++");
    lang.push("go");
    lang.push("java");
    lang.push("python");

    colors.push("red");
    colors.push("yellow");
    colors.push("blue");
    colors.push("green");

    // remove elements from stack

    cout << "initial stack: ";
    display_stack(colors);

    colors.pop();

    cout << "final stack: ";
    display_stack(colors);

    // returns top element
    cout << lang.top();

    // returns number of elements in stack
    lang.size();

    // returns true if staCk is empty
    lang.empty();

    return 0;
}

void display_stack(stack<string> st) {

  while(!st.empty()) {
    cout << st.top() << ", ";
    st.pop();
  }

  cout << endl;
}