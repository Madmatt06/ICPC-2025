#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int lastDigit = 0;
    string input;
    while (cin >> input) {
        int money = 0;
        int deciScope = 0;
        bool deci = false;
        for (int i = 0; i < input.size(); i++) {
            if (input[i] == '.') {
                deci = true;
            } else {
                money *= 10;
                money += input[i] - '0';
                if (deci) {
                    deciScope++;
                }
            }
        }
        for (int i = deciScope; i < 2; i++) {
            money *= 10;
        }
        lastDigit = money%10;

        if (lastDigit == 3 || lastDigit == 4) {
            money += (5-lastDigit);
        }else if (lastDigit == 8 || lastDigit == 9) {
            money += (10-lastDigit);
        }else if (lastDigit == 1 || lastDigit == 2) {
            money -= lastDigit;
        }else if (lastDigit == 6 || lastDigit == 7) {
            money -= (lastDigit-5);
        }
        string output = to_string(money);
        while (output.size() < 3) {
            output = '0' + output;
        }
        for (int i = 0; i < output.size(); i++) {
            if (i == output.size()-2) {
                cout << '.';
            }
            cout << output[i];
        }
        cout << endl;

    }

    return 0;
}
