// FUNCTIONS
//

#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;


int myFact(int x) {
    int f = 1;
    for (int i = 1; i <= x; i++) {
        f *= i;
    }
    return f;
}
double myPow(double base, int power) {
    double p = 1;
    for (int i = 1; i <= power; i++) {
        p *= base;
    }
    return p;
}

double mySin(double a, int term) {
    double sum = 0;
    int sign = 1;
    for (int i = 0; i < term; i++) {
        sum += sign * myPow(a, (2 * i + 1)) / myFact((2 * i + 1));
        sign *= -1;
    }
    return sum;
}

double cosine(double c, int term) {
    double sum = 0;
    for (int i = 0; i < term; i++) {
        sum += pow(-1, i) * pow(c, 2 * i) / myFact(2 * i);
    }
    return sum;
}

int main() {
    const double pi = 3.1415926;
    double angle, angleR;
    cout << "Enter angle in degre";
    cin >> angleR;
    cout << "Enter angle in degrees: ";
    cin >> angle;
    angleR = angle * pi / 180;
    cout << mySin(angleR, 5);

}
/* double Factorial(int x) {
	double sum = 1;
	for (int i = 2; i <= x; i++) {
		sum *= i;
	}
	return sum;
}
void Combination(int x, int y) {
	cout << "Combination of " << x << " and " << y << " is: " << Factorial(x) / ((Factorial(y) * Factorial(x - y)));
}

int main() {
	cout << "Enter numbers, first number should be larger or equal. ";
	int x, y;
	cin >> x >> y;
	Combination(x, y);
	system("pause>0");
} */