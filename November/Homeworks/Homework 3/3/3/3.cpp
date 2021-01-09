#include <iostream>

using namespace std;

void transformed(int arr[9], int size){

	int x = 0;
	for (int i = 0; i < 9; i++) {
		if (i < 2) {
			if (x == 0) {
				x++; 
				cout << arr[i];
				cout << arr[i] << " ";
			};
			if (x == 1) {
				int a = i + 3;
				x++;
				cout << arr[a];
				cout << arr[a] << " ";
			};
			
		}
		else if (i == 2) {
			if (x == 2) {
				int a = i + 4;
				x = 0; 
				cout << arr[a];
				cout << arr[a] << endl;
			};
		}
		if (i > 2 && i < 5) {
			// i starts 3
			if (x == 0) {
				x++;
				int a = i - 2;
				cout << arr[a];
				cout << arr[a] << " ";
			};
			if (x == 1) {
				int a = i + 1;
				x++;
				cout << arr[a];
				cout << arr[a] << " ";
			};
		}
		else if (i == 5) {
			if (x == 2) {
				int a = i + 2;
				x = 0;
				cout << arr[a];
				cout << arr[a] << endl;
			};
		}
		if (i > 5 && i < 8) {
			// i starts 6
			if (x == 0) {
				x++;
				int a = i - 4;
				cout << arr[a];
				cout << arr[a] << " ";
			};
			if (x == 1) {
				int a = i - 1;
				x++;
				cout << arr[a];
				cout << arr[a] << " ";
			};
		}
		else if (i == 8) {
			cout << arr[i];
			cout << arr[i] << endl;
		}
	}

}

int main()
{
	int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = sizeof(arr)/ sizeof(arr[0]);

	for (int i = 0; i < 10; i++) {
		if (i < 2) {
			cout << arr[i];
			cout << arr[i] << " ";
		}
		else if (i == 2) {
			cout << arr[i];
			cout << arr[i] << endl;
		}
		if (i > 2 && i < 5) {
			cout << arr[i];
			cout << arr[i] << " ";
		} else if (i == 5) {
			cout << arr[i];
			cout << arr[i] << endl;
		}
		if (i > 5 && i < 8) {
			cout << arr[i];
			cout << arr[i] << " ";
		}
		else if (i == 8) {
			cout << arr[i];
			cout << arr[i] << endl;
		}
	}
	cout << endl << "transformed" << endl << endl;
	
	transformed(arr, size);
}