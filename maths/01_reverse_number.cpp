#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int n){
    
    int rev_num = 0;

    while(n>0){

        int last_dig = n % 10;

        rev_num = rev_num * 10 + last_dig;

        n = n / 10;
    }
    
    return rev_num;
}

int main(){

    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    cout << reverseNumber(num) << endl;

    return 0;
}