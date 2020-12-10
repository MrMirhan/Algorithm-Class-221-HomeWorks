/*

Write a program  that reads a 15 element array and returns the index of the minimum value stored in that array.

*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[15] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };

    int x;

    int n = sizeof(arr) / sizeof(arr[0]);



    cout << "Array: ";

    for (int i = 0; i < n; i++)

        cout << arr[i] << " ";



    cout << "\nMin Element = "

        << *min_element(arr, arr + n);



    return 0;
}
