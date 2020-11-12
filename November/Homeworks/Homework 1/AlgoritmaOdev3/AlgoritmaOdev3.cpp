// AlgoritmaOdev3.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");
    while (true) {
        int a, b, c;
        char i;
        string type;
        int sum;
        cout << "ax^2 + bx + c örnek 2. dereceden denklemdir." << endl;
        while (1) {
            cout << "Birinci sayıyı girin (a): ";
            cin >> a;
            if (a == 0) {
                cout << "a Sıfır olursa bu bir ikinci dereceden denklem olmaz!";
                cin.clear();
                cin.ignore(INT_MAX, '\n');
            }
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
            cout << "\nİkinci sayıyı girin (b): ";
            cin >> b;
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
            cout << "\nÜçüncü sayıyı girin (c): ";
            cin >> c;
            if (cin.good()) {
                break;
            }
            else {
                cout << "Lütfen sadece sayı giriniz!" << endl;
                cin.clear();
                cin.ignore(INT_MAX, '\n');
            }
        }

        float discriminant, realPart, imaginaryPart, x1, x2;
        discriminant = b * b - 4 * a * c;
        if (discriminant > 0) {
            x1 = (-b + sqrt(discriminant)) / (2 * a);
            x2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Kökler birbirinden farklı ve gerçek kök." << endl;
            cout << "Kök 1 = " << x1 << endl;
            cout << "Kök 2 = " << x2 << endl;
        }
        else if (discriminant == 0) {
            cout << "Kökler aynı ve gerçek kök." << endl;
            x1 = (-b + sqrt(discriminant)) / (2 * a);
            cout << "Kök 1 = Kök 2 =" << x1 << endl;
        }
        else {
            realPart = (float)-b / (2 * a);
            imaginaryPart = sqrt(-discriminant) / (2 * a);
            cout << "Kökler karmaşık sayı ve birbirinden farklı." << endl;
            cout << "Kök 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
            cout << "Kök 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
        }

        cout << "\nİşlemi bitirmek için 'c' yazın. Devam etmek için bir harfe basıp ENTER tuşuna basın.";
        cin >> i;
        if (i == 'c') {
            break;
        }
    }
}