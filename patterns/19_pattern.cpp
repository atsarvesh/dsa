#include <bits/stdc++.h>
using namespace std;

/*
    Alpha Triangle Pattern
    
    E
    D E
    C D E
    B C D E
    A B C D E
*/
int main(){

    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for(int i = 0; i <= n - 1; i++){

        char starting_char = ('A' + n - 1 ) - i;
        for(char ch = starting_char; ch <= 'A' + n - 1; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}