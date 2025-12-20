#include <bits/stdc++.h>
using namespace std;

int main() {

    cout << "hello world!" << endl;

    // relational and logical operators

    int a = 4;
    int b = 5;
    // && ~ AND operator
    cout << ((a==0) && (a>b)) << endl;
    cout << ((a==0) && (a<b)) << endl;
    cout << ((a==4) && (a>b)) << endl;
    cout << ((a==5) && (a<b)) << endl;
    // || ~ OR operator
    cout << ((a==0) || (a>b)) << endl;
    cout << ((a==0) || (a<b)) << endl;
    cout << ((a==4) || (a>b)) << endl;
    cout << ((a==5) || (a<b)) << endl;
    // ! ~ NOT operator
    cout << !(b==0) << endl;
    cout << !(b==5) << endl;

    // conditionals

    int num;
    cin >> num;
    if(num>0){
        cout << "positive" << endl;
    }
    else if(num<0){
        cout << "negative" << endl;
    }
    else{
        cout << "zero" << endl;
    }

    if(num!=0){
        if (num>0)
        {
            cout << "positive num" << endl;
        }
        else {
            cout << "negative num" << endl;
        } 
    }
    else {
            cout << "zero" << endl;
    }

    cout << "always execute" << endl;

    // loops

    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }

    int sum;
    for (int i = 0; i <= 100; i++)
    {
        sum+=i;
    }
    cout << "sum is " << sum << endl;
    
    // ranged based

    int x[] = {2,4,6,8,10};
    for (int n : x)
    {
        cout << n << " ";
    }

    // while and do while

    int i = 1;
    while (i<=7)
    {
        cout << i << " ";
    }
    do {
        cout << i << " ";
        i++;
    } while (i<=5);

    // break

    for (int i = 1; i <= 5; i++)
    {
        if(i==3){
            break;
        }
    }
    cout << i << endl;

    // continue

    for (int i = 1; i <= 5; i++)
    {
        if(i==3){
            continue;
        }
    }
    cout << i << endl;

    // goto

    int n;
    int sm = 0.0;
    cin >> n;
    for (int i = 1; i <= 5; i++)
    {
        if(n<0.0){
            goto jump;
        }
        sm+=n;
    }

    jump:
    int avg=sm/(i-1);
    cout << avg << endl;

    // ternary
    
    
    // switch

    
    return 0;
}