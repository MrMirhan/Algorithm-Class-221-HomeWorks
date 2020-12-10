/*

    a. Write a switch-case example with at least 3 cases and a default case.  

    b. Write the if equivalent of your example.

*/

#include <iostream>

using namespace std;

int main()
{
    int x;

    int c;

    cout << "Write your year on college: ";

    cin >> x;

    switch (x) {

    case 1:

        cout << "First year";

        c = 1;

        break;

    case 2:

        cout << "Second year";

        c = 1;

        break;

    case 3:

        cout << "Third year";

        c = 1;

        break;

    case 4:

        cout << "Fourth year";

        c = 1;

        break;

    default:

        cout << "Years can't be smaller than 1 and bigger than 4. Please write this condution.";

        c = 2;

        break;

    }



    if (c == 1) {

        cout << endl << "You write correct.";

        return 1;

    }

    else {

        cout << endl << "You write incorrect.";

        return 0;

    }


}