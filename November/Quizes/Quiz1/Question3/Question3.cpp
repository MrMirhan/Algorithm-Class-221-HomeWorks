#include <iostream>

using namespace std;

int main()
{
	int a;
	cout << "Type which day you are: ";
	cin >> a;
	cout << "\n";
	switch (a) {
	case 1:
		if(a == 1) cout << "Monday (Today)" << endl;
		else cout << "Monday" << endl;
	case 2:
		if (a == 2) cout << "Tuesday (Today)" << endl;
		else cout << "Tuesday" << endl;
	case 3:
		if (a == 3) cout << "Wednesday (Today)" << endl;
		else cout << "Wednesday" << endl;
	case 4:
		if (a == 4) cout << "Thursday (Today)" << endl;
		else cout << "Thursday" << endl;
	case 5:
		if (a == 5) cout << "Friday (Today)" << endl;
		else cout << "Friday" << endl;
	case 6:
		if (a == 6) cout << "Saturday (Today)" << endl;
		else cout << "Saturday" << endl;
	case 7:
		if(a == 7) cout << "New week starting after today!" << endl;
		else cout << "Sunday\n" << "days to finish week" << endl;
	}

}
