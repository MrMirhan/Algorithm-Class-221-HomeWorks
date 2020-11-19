#include <iostream>
#include <string>

using namespace std;


int main()
{
    // Get a element from array

    int myArray[3] = { 1,2,3 };

    cout << "Value of 3th element in myArray: " << myArray[2] << endl;

    // Get size of array

    double myArray2[3] = { 1.0,2.0,3.0 };
    cout << "Sizeof myArray3: " << sizeof(myArray2) << "\n" << endl;

    // Get size and length of array

    int myArray3[4] = { 1,2,3,4 };

    cout << "Sizeof myArray2: " << sizeof(myArray3) << endl;
    cout << "Length of myArray2: " << sizeof(myArray3) / sizeof(myArray3[0]) << endl;

        // Summing the total and get average of the numbers entered


        int M;

        cout << "\nWrite how many number you will enter for get total and average? ";
        cin >> M;

        double myArray4[999];
        for (int i = 0; i < M; i++) {
            cout << "Enter element of "<< i << " to add myArray4: ";
            cin >> myArray4[i];
            cout << "Selected element: " << myArray4[i] << endl;
        }
    
        double sum = 0;
        for (int a = 0; a < M; a++) {
            sum += myArray4[a];
        }

        cout << "\nTotal of you select: " << sum << endl;
        cout << "Average of total: " << sum / M << "\n" << endl;

        // Summing the multiples of the 3 and 5 below 1000 and total of them

        double sum3 = 0;
        double sum5 = 0;
        for (int i = 1; i <= 1000; i++) {
            if (i % 3 == 0) { sum3 += i; cout << i << " "; }
        }
        cout << "\n\nTotal for multiples of 3 below 1000: " << sum3 << "\n" << endl;

        for (int i = 1; i <= 1000; i++) {
            if (i % 5 == 0 && i % 3 != 0) { sum5 += i; cout << i << " ";}
        }
        cout << "\n\nTotal for multiples of 5 below 1000: " << sum5 << endl;
        cout << "\nTotal of 5 and 3 multiples: " << sum3 + sum5 << endl;

        // OR BASICALLY

        double sumt = 0;
        cout << "\nOr basically in one process get multiples: \n" << endl;
        for (int i = 1; i <= 1000; i++) {
            if (i % 5 == 0 || i % 3 == 0) { sumt += i; cout << i << " "; }
        }
        cout << "\n\nTotal for multiples of 3 and 5 below 1000: " << sumt << endl;

        // Summing the squares of the numbers entered

        int N;

        cout << "\nWrite how many number you will enter for get total of squares? ";
        cin >> N;

        double myArray5[999];
        for (int i = 0; i < N; i++) {
            cout << "Enter element of " << i << " to add myArray4: ";
            cin >> myArray5[i];
            cout << "Selected element: " << myArray5[i] << endl;
        }

        double sums = 0;
        cout << "\n";
        for (int a = 0; a < N; a++) {
            int suum = myArray5[a] * myArray5[a];
            cout << "Square of " << myArray5[a] << ": " << suum << endl;
            sums += suum;
        }

        cout << "\nTotal of squares you select: " << sums << endl;
}