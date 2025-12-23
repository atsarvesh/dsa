#include <bits/stdc++.h>
using namespace std;

void display(int n[][2]) {
    cout << "Displaying Values: " << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "num[" << i << "][" << j << "]: " << n[i][j] << endl;
        }
    }
}

int main(){

    int nums[5] = {2,4,6,8,10};
    cout << "the numbers are: ";
    for (int n : nums){
        cout << n << " ";
    }

    // user input

    int num1[5];
    cout << "enter the numbers: ";
    for (int i = 0; i < 4; i++)
    {
        cin >> num1[i];
    }
    cout << "the numbers are: ";
    for (int n = 0; n < 5; n++){
        cout << num1[n] << " ";
    }
    num1[4]=67;
    cout << num1[4];

    // initialize 2d array
    int num[3][2] = {
        {3, 4},
        {9, 5},
        {7, 1}
    };
    
    display(num);
    
    return 0;
}