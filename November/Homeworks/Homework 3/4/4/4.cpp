#include <iostream>

using namespace std;

int main()
{
    
    int arr[12] = { 4, 11, 16, -2, 65, -5, 12, 1, 123, 54, 10, 0 };
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        int min = arr[i];
        int minAll = i;
        
        for (int n = i; n < size; n++) {
            if (arr[n] < min) {
                min = arr[n];
                minAll = n;
            }
        }

        int x = arr[minAll];
        arr[minAll] = arr[i] ;
        arr[i] = x;

    }

    for (int x = 0; x < size; x++) {
        if(x == (size - 1)) {
            cout << arr[x];
        } else cout << arr[x] << ", ";
    }
}
