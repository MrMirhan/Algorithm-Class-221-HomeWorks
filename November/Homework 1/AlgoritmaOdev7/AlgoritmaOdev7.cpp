#include <iostream>
#include <string>

using namespace std;

void hcf(int n1, int n2) {
    while (n1 != n2)
    {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    cout << "En büyük ortak bölen = " << n1;
}

int main()
{
    setlocale(LC_ALL, "Turkish");
    while (true) {
        char i;
        int n1, n2;

        while (1) {
            cout << "Tersten yazılması için 4 sayı giriniz. (Örn: 1, 1234, 23, 124)" << endl;
            cin >> n1 >> n2;
            if (cin.good()) {
                break;
            }
            else {
                cout << "Lütfen sadece sayı giriniz!" << endl;
                cin.clear();
                cin.ignore(INT_MAX, '\n');
            }
        }
        hcf(n1, n2);
        cout << "\nİşlemi bitirmek için 'c' yazın. Devam etmek için bir harfe basıp ENTER tuşuna basın.";
        cin >> i;
        if (i == 'c') {
            break;
        }
    }
}
