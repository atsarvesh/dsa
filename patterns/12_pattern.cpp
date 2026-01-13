#include <bits/stdc++.h>
using namespace std;

/*
    Floyd's Triangle pattern
    1
    2 3
    4 5 6
*/


int main(){

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int current_number = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << current_number << " ";
            current_number++;
        }
        cout << endl;
    }

    return 0;
}