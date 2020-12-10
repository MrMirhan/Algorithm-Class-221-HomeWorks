/*

Given the following piecewise function;

                        x          x<0

           f(x) =       3          x=0

                        x2         x>0

Write a code to calculate value of f(x) .

*/

#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Write x value for calculate function: ";

    cin >> x;

    if (x < 0) { cout << x; return 0; }

    if (x == 0) { cout << "0"; return 0; }

    if (x > 0) { cout << (x * x); return 0; }
}
