#include <iostream>

using namespace std;

int main()
{
	double i = 2, n = 3;
	double total = 0;
	while (i < 21) {
		double sum = (i * n);
		double sum2 = 1 / sum;
		cout << "1 / (" << i << " * " << n << ")" << endl;
		i++;
		n++;
		cout << sum2 << endl;
		total = sum2 + total;
	}

	cout << "Total:\n" << total;
}
