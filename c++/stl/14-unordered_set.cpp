/*
     unordered set is an unordered associative container

     provides functionality of unordered set data structure 

     multiple elements can have quivalent values ~ duplicates are allowed

     implemented as hash table

 */

#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

void display_unordered_set(const unordered_set<string> &);

int main() {

  unordered_set<int> numbers {1, 100, 10, 70, 100};

  // loop across the unordered set
  cout << "numbers = ";
  for(auto &num: numbers) {
    cout << num << ", ";
  }

  // insert elements into unordered set 

  unordered_set<string> countries;

  countries.insert("Nepal");
  countries.insert({"Nepal", "India", "USA", "Korea"});

  cout << "Countries = ";
  for(const auto& country: countries) {
    cout << country << ", ";
  }

  // remove elements from unordered set

  unordered_set<string> languages {"C++", "Python", "Java", "PHP"};

  cout << "Initial unordered set:\n";
  display_unordered_set(languages);

  languages.erase("Python");

  cout << "\n\nFinal unordered set: \n";
  display_unordered_set(languages);

  // few more methods

  unordered_set<int> primes {2, 3, 5, 7, 11, 13};

  cout << "Using find():" << endl;
  cout << "Does number " << 12 << " exist? ";

  if (primes.find(12) != primes.end()) {
    cout << "Yes";
  }
  else {
    cout << "No";
  }

  cout << "\n\nUsing count():" << endl;
  cout << "Does number " << 7 << " exist? ";

  if (primes.count(7)) {
    cout << "Yes";
  }
  else {
    cout << "No";
  }

  return 0;
}

void display_unordered_set(const unordered_set<string> &uset) {
  for(const auto& value: uset) {
    cout << value << ", ";
  }
}

/*
    other methods:

    find. count, end, size
*/