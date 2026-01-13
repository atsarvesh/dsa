#include <bits/stdc++.h>
using namespace std;

/*
    A B C D E
    A B C D
    A B C
    A B
    A
*/

int main(){

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 0; i <= n; i++){
        for(char ch = 'A'; ch < 'A' + n - i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}