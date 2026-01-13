#include <bits/stdc++.h>
using namespace std;



/*
    Number Crown Pattern
    
    1                 1
    1 2             2 1
    1 2 3         3 2 1
    1 2 3 4     4 3 2 1
    1 2 3 4 5 5 4 3 2 1
*/

int main(){

    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for(int i = 1; i <=n; i++){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }

        int spc = 2 * (n - i);
        for(int j = 1; j <= spc; j++){
            cout << "  ";
        }
        for(int j = i; j >= 1; j--){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;

}