// DersApp1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

using namespace std;

int main()
{
	int x = 1, y = 0, n, s;
	cout << "How much you want to see Fibonacci Numbers?" << endl;
	cin >> n;
	cout << "\n";
	for (int i = 0; i <= n; i++)
	{
		s = x + y;
		cout << s << " ";
		x = y;
		y = s;
	}
}