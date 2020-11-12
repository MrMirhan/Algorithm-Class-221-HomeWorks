#include <iostream>

using namespace std;

int main()
{
	char i;
	while (1) {

		int a;
		cout << "Type day: ";
		cin >> a;
		int sum = a * 86400;
		cout << "\n" << a << " day is equals " << sum << " seconds";

		cout << "\nStop the process write 'c'. To continue press any char then ENTER.";
		cin >> i;
		if (i == 'c') {
			break;
		}
	}
}
