// Question 2

#include <iostream>
#include <windows.h>

using namespace std;

int dice() {
    int number;
    for (int i = 0; i < 10; i++) {
        number = rand() % 6 + 1;
    }
    return number;
}

int main()
{
    srand(time(0));
    int lastDice = 0;
    int state = 0;
    cout << "Welcome to the TSG!" << endl;
    Sleep(2000);
    cout << "Oh! What does it mean the TSG?" << endl;
    Sleep(2000);
    cout << "Its simple. Short of the The Shaking Game!" << endl;
    Sleep(2000);
    cout << "Surprised right! I can feel it haha!" << endl;
    Sleep(2000);
    cout << "Now! The Shaker will shaking the dices for you\nand your dice will define your fate!" << endl;
    Sleep(4500);
    cout << "If total of your dices is 7 or 11 you win the Big Gift!" << endl;
    Sleep(4500);
    cout << "If total of your dices is 2, 3 or 12 you loose!" << endl;
    Sleep(3000);
    cout << "And if total of your dices is not one of them you have 1 chance to try again!" << endl;
    Sleep(5000);
    cout << "Now, you learnt everything about the game!" << endl;
    Sleep(2000);
    cout << "Then TSG can staaart!" << endl;
    Sleep(2000);
    cout << "Shakiiiing!" << endl;
    Sleep(1000);
    cout << "1!" << endl;
    Sleep(1000);
    cout << "2!" << endl;
    Sleep(1000);
    cout << "3!" << endl;
    Sleep(1000);
    cout << "Aaaand here is your fate!" << endl;
    Sleep(3000);
    redice:
    srand(time(0));
    int d1 = dice(), d2 = dice(), total = (d1 + d2);
    if (state == 0) {
        if (total == 7 || total == 11) {
            cout << "\x1B[2J\x1B[H";
            cout << "You win the god damn Big Gift!" << endl << "Your dice was: " << total << endl;
            return 1;
        }
        else if (total == 2 || total == 3 || total == 12) {
            cout << "\x1B[2J\x1B[H";
            cout << "God no.. You loose all." << endl << "Your dice was: " << total << endl;
            return 0;
        }
        else {
            cout << "\x1B[2J\x1B[H";
            cout << "You are lucky man! You loose but you can try again!" << endl << "Your dice was: " << total << endl;
        }
        ask:
        int x;
        cout << "Now! Do you want re-try your chance? (1 - 0)" << endl;
        cin >> x;
        if (cin.good()) {
            if (x != 1 && x != 0) { cout << "\x1B[2J\x1B[H"; cout << "You can choose just 1 or 0." << endl; goto ask; }
            if (x == 1) { cout << "\x1B[2J\x1B[H"; cout << "Program re running.." << endl; lastDice = total; state = 1; goto redice; }
            if (x == 0) { cout << "\x1B[2J\x1B[H"; cout << "Program shutting down.." << endl; return 0; }
        }
        else { cin.clear(); cin.ignore(INT_MAX, '\n'); cout << "\x1B[2J\x1B[H"; cout << "You can choose just 1 or 0." << endl; goto ask; }
    }
    else if(state == 1) {
        if (total + lastDice <= 12) total = total + lastDice;
        if (total == 7 || total == 11) {
            cout << "\x1B[2J\x1B[H";
            cout << "You win the god damn Big Gift!" << endl << "Your dice was: " << total << endl;
            return 1;
        }
        else {
            cout << "\x1B[2J\x1B[H";
            cout << "God no.. You loose all." << endl << "Your dice was: " << total << endl;
            return 0;
        }
    }
    
}