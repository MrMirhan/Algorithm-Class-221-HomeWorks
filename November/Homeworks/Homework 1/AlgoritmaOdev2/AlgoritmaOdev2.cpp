// AlgoritmaOdev2.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <string>

using namespace std;

void calc(int x, int y, string type)
{
    if (type == "+") {
        int sum = x + y;
        cout << "Toplama işleminin sonucu:\n" << sum;
    }
    else if (type == "-") {
        int sum = x - y;
        cout << "Çıkarma işleminin sonucu:\n" << sum;
    }
    else if (type == "*") {
        int sum = x * y;
        cout << "Çarpma işleminin sonucu:\n" << sum;
    }
    else if (type == "/") {
        int sum = x / y;
        cout << "Bölme işleminin sonucu:\n" << sum;
    }
    else {
        cout << "Böyle bir işlem tipi yok.";
    }
}

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
        while (1) {
            cout << "\nİşlem tipini girin (+, -, /, *): ";
            cin >> type;
            if (type ==  "+" || type == "-" || type == "/" || type == "*") {
                break;
            }
            else {
                cout << "Lütfen sadece (+, -, /, -) sembollerini kullanın!" << endl;
                cin.clear();
                cin.ignore(INT_MAX, '\n');
            }
        }
        calc(x, y, type);
        cout << "\nİşlemi bitirmek için 'c' yazın. Devam etmek için bir harfe basıp ENTER tuşuna basın.";
        cin >> i;
        if (i == 'c') {
            break;
        }
    }
}