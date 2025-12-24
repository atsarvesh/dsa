// enumeration is a user defined type that consists of integral constants

#include <bits/stdc++.h>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

// enum default values
enum seasons { spring = 34, summer = 4, autumn = 9, winter = 32 };

int main()
{
    week today;
    seasons s;
    today = Sunday;
    s = summer;
    cout << "Day " << today+1 << endl;
    cout << "Summer " << s << endl;

    return 0;
}