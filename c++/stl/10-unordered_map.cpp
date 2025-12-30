/*
    unordered map is an unordered associative container that provides functions of dictionary data structure

    the order of keys in an unordered map is undefined

    implementation:
     regular map = binary search tree
     unordered map = hash table

*/

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(){
    
    unordered_map<string, int> unordered_map1  {
    {"One", 1},
    {"Two", 2},
    {"Three", 3}
    };

    cout << "Key - Value" << endl;

    // loop across the unordered map

    for(const auto& key_value: unordered_map1) {
        string key = key_value.first;
        int value = key_value.second;
        
        cout << key << " - " << value << endl;
    }

    /*
        or use structure binding:

        for(const auto& [key, value]: unordered_map1) {
            cout << key << " -  " << value << endl; 
        }
    */

    // insert elements into an unordered map

    unordered_map<string, int> unordered_map1;
  
    // insert key-value pair {"One", 1}
    unordered_map1["One"] = 1;

    // insert a pair {"Two", 2}
    unordered_map1.insert({"Two", 2});

    // insert two pairs {"Three", 3}, {"Four", 4}	
    unordered_map1.insert({{"Three", 3}, {"Four", 4}});
    
    cout << "Key - Value" << endl;
 
    for(const auto& key_value: unordered_map1) {
        string key = key_value.first;
        int value = key_value.second;
        
        cout << key << " - " << value << endl;
    }

    // access elements

    unordered_map<string, string> capital_city {
    {"Nepal", "Kathmandu"},
    {"India", "New Delhi"},
    {"Australia", "Canberra"}
    };
  
    cout << "Capital of Nepal is " << capital_city["Nepal"] << endl;
    cout << "Capital of Australia is " << capital_city.at("Australia");

    // change values of an unordered map

    unordered_map<string, string> capital_city1 {
    {"India", "Calcutta"},
    {"Pakistan", "Karachi"},
    };
  
    cout << "Old Capitals:" << endl;
    cout << "India : " << capital_city1["India"] << endl;
    cout << "Pakistan : " << capital_city1["Pakistan"];
    
    // change value for "India" using []
    capital_city1["India"] = "New Delhi";

    // change value for "Pakistan" using at()
    capital_city1.at("Pakistan") = "Islamabad";
    
    cout << "\n\nNew Capitals:" << endl;
    cout << "India : " << capital_city1["India"] << endl;
    cout << "Pakistan : " << capital_city1["Pakistan"];
  
  return 0;
}

/*
    other methods:
    find, erase, count, clear
*/
