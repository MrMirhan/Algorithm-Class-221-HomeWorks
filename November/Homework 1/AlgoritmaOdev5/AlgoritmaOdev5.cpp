#include <iostream>
#include <string>

using namespace std;

void reverse(int a, int b, int c, int d) {
    cout << d << "  " << c << "  " << b << "  " << a;
}

int main()
{
    setlocale(LC_ALL, "Turkish");
    while (true) {
        char i;
        int a, b, c, d;

        while (1) {
            cout << "Tersten yazılması için 4 sayı giriniz. (Örn: 1, 1234, 23, 124)" << endl;
            cin >> a >> b >> c >> d;
            if (cin.good()) {
                break;
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
