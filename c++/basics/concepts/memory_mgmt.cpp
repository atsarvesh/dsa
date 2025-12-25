/*
 dynamic memory allocation ~ allocat ememory at runtime

 we need to deallocate memory manually after we have no use
 by using 'new' and 'delete' operators
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    // dynamically allocate memory
    int* point_int = new int{45};
    float* point_float = new float{45.45f};

    cout << *point_int << endl;
    cout << *point_float << endl;

    // deallocate the memory ~ set pointers to nullptr
    delete point_int;
    delete point_float;

    int num;
    cout << "enter total students";
    cin >> num;
    float *ptr;
    cout << "enter marks of students: " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << "student " << i + 1 << ":";
        cin >> *(ptr + i);
    }
    cout << "displaying marks of students: " << endl;
    for (int i = 0; i < num; i++)
    {
        cout << "student " << i + 1 << ": " << *(ptr + i) << endl;
    }
    
    // ptr memory is released
    delete[] ptr;
    ptr = nullptr;

    return 0;
}

