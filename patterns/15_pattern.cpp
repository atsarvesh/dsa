#include <bits/stdc++.h>
using namespace std;

/*
    Alpha Ramp Pattern

    A
    B B
    C C C
    D D D D
*/

int main(){

    int n;
    cout << "Enter number of rows: ";
    cin >> n;


    for(int i = 0; i <= n-1; i++){
        char ch = 'A' + i;
        for(int j = 0; j <= i; j++){
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}