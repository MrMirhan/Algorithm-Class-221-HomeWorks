#include <iostream>

using namespace std;

void transform(int arr[25], int size) {

	for (int i = 0; i < size; i++) {
		if (i != 0 && i % 5 == 0) {
			if (i == 0 || i == 4 || i == 6 || i == 8 || i == 12 || i == 16 || i == 18 || i == 20 || i == 24) {
				cout << endl << 0 << " ";
			}
			else {
				cout << endl << arr[i] << " ";
			}
		}
		else {
			if (i == 0 || i == 4 || i == 6 || i == 8 || i == 12 || i == 16 || i == 18 || i == 20 || i == 24) {
				cout << 0 << " ";
			}
			else {
				cout << arr[i] << " ";
			}
		}
	}
}

int main()
{
	int arr[25] = { 11, 12, 13, 14, 15, 21, 22, 23, 24, 25, 31, 32, 33, 34, 35, 41, 42, 43, 44, 45, 51, 52, 53, 54, 55 };
	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; i++) {
		if (i != 0 && i % 5 == 0) {
			cout << endl << arr[i] << " ";
		}
		else {
			cout << arr[i] << " ";
		}
	}
	cout << endl << endl << "transformed" << endl << endl;

	transform(arr, size);
}