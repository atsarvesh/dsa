/*
    multimap allows multiple elements to have equivalent keys
*/

#include <bits/stdc++.h>
#include <map>
using namespace std;

// function prototype

void display_multimap(const multimap<int,string> &);

int main(){

    multimap<int, string> my_multimap = {
        {1, "one"},
        {2, "two"},
        {1, "uno"},
        {3, "three"},
        {2, "dos"},
        {1, "un"},
        {2, "deux"}
    };

    cout << "key-value: " << endl;

    // loop across multimap key-value pairs

    for (const auto& key_value: my_multimap){
        int key = key_value.first; // gives the key
        string value = key_value.second; // gives the value
        cout << key << " - " << value << endl;
    }

    // insert into multimap

    multimap<string, int> numbers;

    numbers.insert({"odd",1});
    numbers.insert({"even",2});
    numbers.insert({{"odd",7},{"even",4},{"odd",5}});

    cout << "key-value: " << endl;
    for (const auto& key_value: numbers){
        string key = key_value.first; // gives the key
        int value = key_value.second; // gives the value
        cout << key << " - " << value << endl;
    }

    // remove elements from multimap

    multimap<int, string> stud {
        {111, "alice"},
        {132, "bob"},
        {143, "chris"},
        {143, "dan"}
    };

    cout << "initial multimap: " << endl;
    display_multimap(stud);

    stud.erase(143); // removes element with key 143

    cout << "multimap after erasing: " << endl;
    display_multimap(stud);

    stud.clear();

    cout << "multimap after clearing: " << endl;
    display_multimap(stud);

    return 0;
}

void display_multimap(const multimap<int,string> &umap){

    for (const auto& key_value: umap){
        int key = key_value.first; // gives the key
        string value = key_value.second; // gives the value
        cout << key << " - " << value << endl;
    }
}

/*
    other methods:
    find, empty, size, count
*/
