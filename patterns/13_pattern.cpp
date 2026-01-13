#include <bits/stdc++.h>
using namespace std;

/*
    A
    A B
    A B C
    A B C D
*/

int main(){

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        for(char ch = 'A'; ch < 'A' + i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}