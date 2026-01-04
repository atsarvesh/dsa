/*
    fstream includes two classes for file handling:
    ifstream = to read from file
    ofstream = to create/open and write to file

*/
#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main(){

    // ofstream my_file("example.txt"); if no such file, it will create file "example.txt"

    /*  three ways to check files for errors:
        
        1. check file object

        if (!my_file){
            cout << "error opening file";
            return 1;
        }

        2. is_open() = return true if open successfully, else false

        if (!my_file.is_open()){
            cout << "error opening file";
            return 1;
        }

        3. fail() = return false if open successfully, else true

        if (!my_file.fail()){
            cout << "error opening file";
            return 1;
        }

    */

    /* read from file

    ifstream my_file("example.txt");

    if (!my_file){
            cout << "error: unable to open file" << endl;
            return 1;
    }

    string line; // store content of file in string

    while (!my_file.eof()){ // loop at the end of file

        getline (my_file, line);

        cout << line << endl;

    }
    */

    /*

        write to file

        ofstream my_file("example.txt");

        if (!my_file){
                cout << "error: unable to open file" << endl;
                return 1;
        }

        my_file << "line 1" << endl;
        my_file << "line 1" << endl;
        my_file << "line 1" << endl;


    */

    /*
        append to text file

        ofstream my_file("example.txt", ios::app);

        if (!my_file){
                cout << "error: unable to open file" << endl;
                return 1;
        }

        my_file << "line 1" << endl;
        my_file << "line 1" << endl;
        my_file << "line 1" << endl;

    */

    // 1. write to a text file

    fstream my_file("example.txt", ios::out);

    if (my_file) {
        my_file << "This is a test line." << endl;
        my_file.close();
    }
    else {
        cout << "Unable to open file for writing." << endl;
        return 1;
    }

    // 2. read from the same file

    string line;

    my_file.open("example.txt", ios::in);
    
    if (my_file) {
        while (!my_file.eof()) {
            getline(my_file, line);
            cout << "Read from file: " << line << endl;
        }
        my_file.close();
    }
    else {
        cout << "Unable to open file for reading." << endl;
        return 1;
    }

    // 3. append data to the end of the file

    my_file.open("example.txt", ios::app);

    if (my_file) {
        my_file << "This is another test line, appended to the file." << endl;
        my_file.close();
    }
    else {
        cout << "Unable to open file for appending." << endl;
        return 1;
    }

    return 0;
}