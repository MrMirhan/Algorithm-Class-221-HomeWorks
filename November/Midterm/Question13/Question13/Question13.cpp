/*

Write a program that attempts to remove a value from an array:  The program searches  elements of an array for a user given value x. If x is found
it is removed, all the elements above that position are shifted down  and 1 is returned to indicate a successful removal
( To remove the element change its value to zero and shift all the elements). If x is not found, the array is left unchanged
and 0 is returned to indicate“not found.” Assume that array has 20 elements.

For example:  a=(1,2,3,4,5,6) and   if the user enters 3, array becomes a=(1,2,4,5,6,0)

*/

#include <iostream>

using namespace std;

int main()
{
    int arr[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };

    int x;

    int s = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";

    for (int i = s - 1; i >= 0; i--)

        cout << arr[i] << ", ";

    cout << "\nWrite which number you want to remove in array: ";

    cin >> x;



    int i;

    for (i = 0; i < s; i++)

        if (arr[i] == x)

            break;



    if (i < s)

    {



        s = s - 1;

        for (int j = i; j < s; j++)

            arr[j] = arr[j + 1];



        cout << "\nNew array: ";

        for (int i = s - 1; i >= 0; i--)

            cout << arr[i] << ", ";

        return 1;

    }

    else {

        cout << "\nNot found in array.";

        return 0;

    }
}
