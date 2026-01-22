#include <bits/stdc++.h>
using namespace std;

vector<int> getDivisors(int N)
{
    vector<int> res;

    for (int i = 1; i <= N; i++)
    {
        // Check if i is a divisor of N
        if (N % i == 0)
        {
            res.push_back(i);
        }
    }
    return res;
};

int main()
{

    int N;
    cout << "Enter a number: ";
    cin >> N;

    // Call the function to get divisors
    vector<int> result = getDivisors(N);

    // Print the result
    cout << "Divisors of " << N << ": ";
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
