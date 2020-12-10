/*

Write a program which finds the common elements of two arrays. Both arrays have 10 elements and program should print the common elements only once.
For example: a1=(1,2,3,4,5,6,7,8,9,10) and a2=(1,11,2,1,14,21,22,23,2,10). output is 1,2,10.

*/

#include <iostream>

using namespace std;


int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int arr2[10] = { 1,11,2,1,14,21,22,23,2,10 };

	int n = sizeof(arr) / sizeof(arr[0]);

	int n2 = sizeof(arr2) / sizeof(arr2[0]);



	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {

			if (arr[i] == arr2[j]) {

				cout << " " << arr[i];

			}



		}

	}
}