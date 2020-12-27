// Question 3

#include <iostream>
using namespace std;

int perm(int n, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (i == 0) sum += n;
        else sum *=  (n - i);
    }
    return sum;
}

int main()
{
    int n, k;
    cout << "Write num1: ";
    cin >> n;
    cout << "Write num 2: ";
    cin >> k;
    cout << "P(" << n << ", " << k <<"): " << perm(n, k);
}