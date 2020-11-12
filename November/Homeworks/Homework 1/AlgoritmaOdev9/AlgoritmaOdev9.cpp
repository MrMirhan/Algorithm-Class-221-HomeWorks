#include <iostream>
#include <string>

using namespace std;

void factors(int num) {
    int i;
    cout << num << " sayısının pozitif bölenleri: " << endl;
    for (i = 1; i <= num; ++i)
    {
        if (num % i == 0)
            cout << i << ", ";
    }
}

int main()
{
    setlocale(LC_ALL, "Turkish");
    while (true) {
        char d;
        int num;
        while (1) {
            cout << "Pozitif bölenlerini bulmak için bir sayı girin:" << endl;
            cin >> num;
            if (cin.good()) {
                break;
            }
            else {
                cout << "Lütfen sadece sayı giriniz!" << endl;
                cin.clear();
                cin.ignore(INT_MAX, '\n');
            }
        }
        factors(num);
        cout << "\nİşlemi bitirmek için 'c' yazın. Devam etmek için bir harfe basıp ENTER tuşuna basın." << endl;
        cin >> d;
        if (d == ' ') {
            continue;
        } else
        if (d == 'c') {
            break;
        }
    }
}