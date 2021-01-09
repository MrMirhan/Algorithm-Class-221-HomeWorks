#include <iostream>
using namespace std;

void pascalTri(int row) {
    for (int i = 1; i <= row; i++)
    {
        int num = 1;
        for (int k = 1; k <= i; k++)
        {
            cout << num << " ";
            num *= (i - k), num /= k;
        }
        for (int z = 0; z <= (row - i); z++) {
            if (i > 5) {
                if (i == row) {
                    if (z == (row - i)) {
                        if ((row - i) == 1) {
                            cout << 0 << " ";
                        }
                    }
                }
                else {
                    cout << 0 << " ";
                }
            }
            else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int a;
    cout << "Write row count for pascal triangle: ";
    cin >> a;
    pascalTri(a);
}