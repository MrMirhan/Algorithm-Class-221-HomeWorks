// Question 1

#include <iostream>

using namespace std;

int digit(int n, int k) {
    for (int i = 0; i < k; i++) {
        n /= 10;
    }
    return n % 10;
}

int main()
{
    int n, k;
    cout << "Write digit: ";
    cin >> n;
    cout << "Write selected number: ";
    cin >> k;
    cout << "first integer in " << n << " is: " << digit(n, 0) << endl;
    string aint = k == 1 ? "st" : "th";
    cout << k << aint << " integer in " << n << " is: " << digit(n, k) << endl;
}