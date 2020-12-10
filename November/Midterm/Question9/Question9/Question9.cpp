/*

    Define two arrays each with 5 elements. Write the code which swaps their elements. ( For example: a1=(1,2,3,4,5), a2=(a,b,c,d,e) after swaping a1=(a,b,c,d,e), a2=(1,2,3,4,5) )

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string arr1[5] = { "a1", "a2", "a3", "a4", "a5" };

    string arr2[5] = { "e1", "e2", "e3", "e4", "e5" };

    int n = sizeof(arr1) / sizeof(arr1[0]);



    cout << "Array 1: ";

    for (int i = n - 1; i >= 0; i--) cout << arr1[i] << ", ";

    cout << endl << "Array 1: ";

    for (int i = n - 1; i >= 0; i--) cout << arr2[i] << ", ";



    for (int i = 0; i < n; i++) {

        string a = arr1[i];

        string b = arr2[i];



        arr1[i] = b;

        arr2[i] = a;

    }



    cout << endl << "\nNew Array 1: ";

    for (int i = n - 1; i >= 0; i--) cout << arr1[i] << ", ";

    cout << endl << "New Array 1: ";

    for (int i = n - 1; i >= 0; i--) cout << arr2[i] << ", ";
}
