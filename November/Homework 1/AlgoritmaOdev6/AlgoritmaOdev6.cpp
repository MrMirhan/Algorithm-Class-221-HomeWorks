#include <iostream>
#include <string>

using namespace std;

void reverse(int a, int b, int c, int d) {
    int xd = 0;
    int ra = 0, rb = 0, rc = 0, rd = 0;
    int t, r;
    for (int i = 1; i < 5; i++) {
        if (xd == 0) {
            for (t = a; a != 0; a = a / 10) {
                r = a % 10;
                ra = ra * 10 + r;
            }
            xd++;
        }
        if (xd == 1) {
            for (t = b; b != 0; b = b / 10) {
                r = b % 10;
                rb = rb * 10 + r;
            }
            xd++;
        }
        if (xd == 2) {
            for (t = c; c != 0; c = c / 10) {
                r = c % 10;
                rc = rc * 10 + r;
            }
            xd++;
        }
        if (xd == 3) {
            for (t = d; d != 0; d = d / 10) {
                r = d % 10;
                rd = rd * 10 + r;
            }
            xd++;
        }
    }

    cout << "1. " << ra << " 2. " << rb << " 3. " << rc << " 4. " << rd;
}

int main()
{
    setlocale(LC_ALL, "Turkish");
    while (true) {
        char i;
        int a, b, c, d;

        while (1) {
            cout << "Ters çevirmek için 4 sayı giriniz. (Örn: 1324, 1234, 5124, 1512)" << endl;
            cin >> a >> b >> c >> d;
            if (cin.good()) {
                if (a < 0 || b < 0 || c < 0 || d < 0) {
                    cout << "Girilen sayı pozitif olmalı!" << endl;
                    cin.clear();
                    cin.ignore(INT_MAX, '\n');
                }
                else {
                    break;
                }
            }
            else {
                cout << "Lütfen sadece sayı giriniz!" << endl;
                cin.clear();
                cin.ignore(INT_MAX, '\n');
            }
        }
        reverse(a, b, c, d);
        cout << "\nİşlemi bitirmek için 'c' yazın. Devam etmek için bir harfe basıp ENTER tuşuna basın.";
        cin >> i;
        if (i == 'c') {
            break;
        }
    }
}
