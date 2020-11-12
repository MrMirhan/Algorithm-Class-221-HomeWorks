// AlgoritmaOdev1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

using namespace std;


int main()
{   
    setlocale(LC_ALL, "Turkish");
    while (true) {
        int x, y;
        char i;
        string type;
        int sum;
        while (1) {
            cout << "Birinci sayıyı girin: ";
            cin >> x;
            if (cin.good()) {
                break;
            }
            else {
                cout << "Lütfen sadece sayı giriniz!" << endl;
                cin.clear();
                cin.ignore(INT_MAX, '\n');
            }
        }
        while (1) {
            cout << "\nİkinci sayıyı girin: ";
            cin >> y;
            if (cin.good()) {
                break;
            }
            else {
                cout << "Lütfen sadece sayı giriniz!" << endl;
                cin.clear();
                cin.ignore(INT_MAX, '\n');
            }
        }

        if (x % y == 0) {
            cout << x << " sayısı " << y << " sayısının katı.";
        }
        else if (x % y != 0) {
            cout << x << " sayısı " << y << " sayısının katı değil.";
        }


        cout << "\nİşlemi bitirmek için 'c' yazın. Devam etmek için bir harfe basıp ENTER tuşuna basın.";
        cin >> i;
        if (i == 'c') {
            break;
        }
    }
}