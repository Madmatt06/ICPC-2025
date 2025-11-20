#include <iostream>

using namespace std;

int main() {
    int prev = 0, current = 0, prevS = 0, currentS = 0, inst, SA = 0;
    cin >> inst;
    for (int i = 0; i < inst; i++) {
        cin >> current;
        currentS = current*current;
        prevS = prev*prev;
        SA += abs(currentS-prevS);
        SA += currentS*4;
        prev = current;
    }
    prevS = prev*prev;
    SA += prevS;
    cout << SA << endl;


    return 0;
}