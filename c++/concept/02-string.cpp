#include <bits/stdc++.h>
using namespace std;

void display( char *);
void display(string); // passing string to function

int main()
{
    char str0[100];
    char str1[50];
    cout << "Enter a string 1: ";
    cin >> str0;
    cout << "Enter a string 2: ";
    cin.get(str1, 50);
    cout << "You entered: " << str0 << str1 << endl;

    string str2; // string object
    cout << "Enter a string: ";
    getline(cin, str2);
    cout << str2;

    string str3;
    char str4[100];

    cout << "Enter a string: ";
    getline(cin, str3);
    cout << "Enter another string: ";
    cin.get(str4, 100, '\n');

    display(str3);
    display(str4);

    // string class

    string str = "Hello world, wonderful world!";
    cout << "String: " << str << endl;
    
    size_t first_occurrence = str.find("world");
    size_t last_occurrence = str.rfind("world");
    
    if (first_occurrence != string::npos) {
        cout << "First occurrence: 'world' found at position: " << first_occurrence << endl;
        cout << "Last occurrence: 'world' found at position: " << last_occurrence << endl;
    }
    else {
        cout << "'world' not found" << endl;
    }

    str.append("have a good day");
    cout << str;
    return 0;
}

void display(char s[]){
    cout << "Entered char array is: " << s << endl;
}

void display(string s){
    cout << "Entered string is: " << s << endl;
}