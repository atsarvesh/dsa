#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n){
    
    int rev_num = 0; // store reverse of a number
    int dupl = n; // store original number

    while(n>0){
        int last_digit = n % 10; // last digit
        rev_num = (rev_num * 10) + last_digit; // reverse number by appending the last digit
        n = n/10; // remove last digit from original number
    }

    if(dupl == rev_num){
        return true;
    } else {
        return false;
    }
}

int main(){
    
    int num;
    cout << "Enter a number to check if it's a palindrome: " << endl;
    cin >> num;

    if(palindrome(num)){
        cout << num << " is a palindrome" << endl;
    } else {
        cout << num << " is not a palindrome" << endl;
    }
    return 0;
}
