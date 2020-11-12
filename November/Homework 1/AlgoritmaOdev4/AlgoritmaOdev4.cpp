// AlgoritmaOdev4.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <string>

using namespace std;

void minmax(int a, int b, int c, int d) {
    int min_ab, min_cd, min, max_ab, max_cd, max;

    min_ab = a < b ? a : b;
    min_cd = c < d ? c : d;
    max_ab = a > b ? a : b;
    max_cd = c > d ? c : d;
    min = min_ab < min_cd ? min_ab : min_cd;
    max = max_ab > max_cd ? max_ab : max_cd;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
}

int main()
{
    setlocale(LC_ALL, "Turkish");
    while (true) {
        char i;
        int a, b, c, d;

        while (1) {
            cout << "Karşılaştırmak adına 4 sayı giriniz. (Örn: 2, 10, 278, 5210)" << endl;
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
        minmax(a, b, c, d);
        cout << "\nİşlemi bitirmek için 'c' yazın. Devam etmek için bir harfe basıp ENTER tuşuna basın.";
        cin >> i;
        if (i == 'c') {
            break;
        }
    }
}
