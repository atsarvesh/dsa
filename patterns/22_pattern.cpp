#include <bits/stdc++.h>
using namespace std;

/*
    Concentric Square Pattern

    For n = 4

    4 4 4 4 4 4 4
    4 3 3 3 3 3 4
    4 3 2 2 2 3 4
    4 3 2 1 2 3 4
    4 3 2 2 2 3 4
    4 3 3 3 3 3 4
    4 4 4 4 4 4 4

*/

int main(){

    int n;
    cout << "Enter the size of the pattern: ";
    cin >> n;

    for(int i = 0; i <= 2*n-2; i++){
        for(int j = 0; j <= 2*n-2; j++){

            int top = i;
            int left = j;
            int right = (2*n-2) - j;
            int bottom = (2*n-2) - i;
            
            int min_dist = min(min(top, bottom), min(left, right));
            cout << n - min_dist << " ";
        }
        cout << endl;
    }
    return 0;
}