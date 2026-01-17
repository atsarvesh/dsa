#include <bits/stdc++.h>
using namespace std;

int countDigits(int N) {

    if (N == 0) {
        return 1;
    }
    int cnt = 0;
    while (N > 0) {
        cnt = cnt + 1;
        N /= 10;
    }
    return cnt;
}

int main() {
    int N;
    cin >> N;

    if (N < 0) {
        N = -N; // Make N positive if it's negative
    }

    cout << countDigits(N) << endl;
    return 0;
}