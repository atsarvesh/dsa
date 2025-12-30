// variables that store memory address of other variables are pointers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int var1 = 3;
    int var2 = 24;
    int var3 = 17;

    // print address
    cout << "Address of var1: "<< &var1 << endl;
    cout << "Address of var2: " << &var2 << endl;
    cout << "Address of var3: " << &var3 << endl;

    int *point_var = &var1;
    int* var_point = &var2;
    cout << *point_var << endl;
    cout << *var_point << endl;

    *point_var = 15;
    cout << *point_var << endl;

    int arr[10];
    int *ptr;

    // before
    for (int i = 0; i < 3; i++)
    {
        cout << "&arr[" << i << "] " << &arr[i] << endl;
    }
    
    ptr = arr;

    // after
    for (int i = 0; i < 3; i++)
    {
        cout << "&arr[" << i << "] " << &arr[i] << endl;
    }

    float arr1[5];
    cout << "enter numbers: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> *(arr1+i);
    }
    cout << "enter numbers: ";
    for (int i = 0; i < 3; i++)
    {
        cout << *(arr1+i) << endl;
    }

    return 0;
}
