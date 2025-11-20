#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << setprecision(7);
    double gpa = 0, bonus = 0;
    int amount = 0;
    cin >> amount;
    int quant = amount;

    while (amount > 0) {
        char grade, num;
        cin >> grade >> num;

        if (grade == 'A') {
            gpa +=4;
        }else if (grade == 'B') {
            gpa +=3;
        }else if (grade == 'C') {
            gpa+=2;
        }else if (grade == 'D') {
            gpa += 1;
        }
        if ((grade == 'A' || grade == 'B' || grade == 'C') && num == '1') {
            bonus += 0.05;
        }else if ((grade == 'A' || grade == 'B' || grade == 'C') && num == '2') {
            bonus += 0.025;
        }
        amount--;
    }
    gpa/=quant;
    gpa += bonus;

    cout << gpa;


    return 0;
}
