/*
    exception is unexpected event that occurs during program execution (divide by 0)

    exceptions can be handled in the following ways-
    throw: throws exception when error is detected (not compulsory)
    try: code that may raise exception
    catch: code that handles exception
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    double num, den, div;
    double arr[4] = {0.0,0.0,0.0,0.0};
    int index;

    cout << "enter array index: ";
    cin >> index;

    try{

        if (index>=4)
        {
            throw "error: array out of bounds";
        }

        cout << "enter numerator: ";
        cin >> num;
        cout << "enter denominator: ";
        cin >> den;
        
        if(den==0){
            throw 0;
        }
        
        arr[index] = num/den;
        cout << arr[index] <<endl;
    }

    catch(const char* msg){
        cout << msg << endl;
    }

    catch(int n){
        cout << "error: cannot divide by " << n << endl;
    }

    catch(...){
        cout << "unexpected exception" << endl;
    }
    return 0;
}

/*
    standard exception-
    std::exception = parent class
    std::bad_alloc = when dynamic memory allocation fails
    std::bad_cast = when attempt is made to perform dynamic_cast to invalid type
    std::bad_exception = when exception is thrown & can't be rethrown
*/