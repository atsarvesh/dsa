#include <bits/stdc++.h>
using namespace std;
/*
    Alpha Hill Pattern
              A
            A B A
          A B C B A
        A B C D C B A
*/

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < i; j++)
        {
            cout << (char)('A' + j) << " ";
        }

        for (int j = i - 2; j >= 0; j--)
        {
            cout << (char)('A' + j) << " ";
        }

        cout << endl;
    }
    return 0;
}