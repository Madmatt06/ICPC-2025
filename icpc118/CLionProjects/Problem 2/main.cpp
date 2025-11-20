#include <iostream>
using namespace std;
void read(char [3][3]);
void t3Read(char [12][9]);
void b3Read(char [12][9]);
void l3Read(char [12][9]);
void r3Read(char [12][9]);
void sSideRead(char [12][9]);
void tSideRead(char [12][9]);
void printCube(char [12][9]);
int main() {
    char cube[12][9] = {0};
    char side[3][3];
    read(side);
    cube[4][4] = side[1][1];
    t3Read(cube);
    b3Read(cube);
    l3Read(cube);
    r3Read(cube);
    tSideRead(cube);
    sSideRead(cube);
    cube[1][4] = '?';
    cube[7][4] = '?';
    cube[10][4] = '?';
    cube[4][1] = '?';
    cube[4][7] = '?';
    printCube(cube);
    return 0;
}

void read(char side[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> side[i][j];
        }
    }
}

void t3Read(char cube[12][9]) {
    for (int i = 0; i < 4; i++) {
        cout << 'U' << endl;
        char side[3][3];
        read(side);
        if (i == 0) {
            cube[3][6]= side[0][0];
            cube[3][7]= side[0][1];
            cube[3][8]= side[0][2];
        } else if(i==1) {
            cube[11][3]= side[0][0];
            cube[11][4]= side[0][1];
            cube[11][5]= side[0][2];
        } else if (i == 2) {
            cube[3][0]= side[0][0];
            cube[3][1]= side[0][1];
            cube[3][2]= side[0][2];
        } else if (i == 3) {
            cube[3][3]= side[0][0];
            cube[3][4]= side[0][1];
            cube[3][5]= side[0][2];
        }
    }
}

void b3Read(char cube[12][9]) {
    for (int i = 0; i < 4; i++) {
        cout << "D'" << endl;
        char side[3][3];
        read(side);
        if (i == 0) {
            cube[5][6]= side[2][0];
            cube[5][7]= side[2][1];
            cube[5][8]= side[2][2];
        } else if(i==1) {
            cube[9][3]= side[2][0];
            cube[9][4]= side[2][1];
            cube[9][5]= side[2][2];
        } else if (i == 2) {
            cube[5][0]= side[2][0];
            cube[5][1]= side[2][1];
            cube[5][2]= side[2][2];
        } else if (i == 3) {
            cube[5][3]= side[2][0];
            cube[5][4]= side[2][1];
            cube[5][5]= side[2][2];
        }
    }
}
void l3Read(char cube[12][9]) {
    for (int i = 0; i < 4; i ++) {
        cout << "L'" << endl;
        char side[3][3];
        read(side);
        cube[((i*3)+6)%12][3] = side[0][0];
        cube[((i*3)+7)%12][3] = side[1][0];
        cube[((i*3)+8)%12][3] = side[2][0];
    }
}
void r3Read(char cube[12][9]) {
    for (int i = 0; i < 4; i ++) {
        cout << 'R' << endl;
        char side[3][3];
        read(side);
        cube[((i*3)+6)%12][5] = side[0][2];
        cube[((i*3)+7)%12][5] = side[1][2];
        cube[((i*3)+8)%12][5] = side[2][2];
    }
}
void sSideRead(char cube[12][9]) {
    cout << "L" << endl << "R'" << endl << "D'" << endl << "U" << endl;
    char side[3][3];
    read(side);
    read(side);
    read(side);
    read(side);
    cube[4][6] = side[2][1];
    cube[4][8] = side[0][1];
    cout << "D'" << endl << "U" << endl << "D'" << endl << "U" << endl;
    read(side);
    read(side);
    read(side);
    read(side);
    cube[4][0] = side[0][1];
    cube[4][2] = side[2][1];
    cout << "D' U L' R" << endl;
    read(side);
    read(side);
    read(side);
    read(side);
}
void tSideRead(char cube[12][9]) {
    cout << "F" << endl << "B'" << endl <<"L" << endl << "R'" << endl << "U" << endl <<"D'" << endl;
    char side[3][3];
    read(side);
    read(side);
    read(side);
    read(side);
    read(side);
    read(side);
    cube[0][4] = side[0][1];
    cube[2][4] = side[2][1];
    cout << "U" << endl << "D'" << endl << "U" << endl << "D'" << endl;
    read(side);
    read(side);
    read(side);
    read(side);
    cube[6][4] = side[2][1];
    cube[8][4] = side[0][1];
    cout << "U" << endl << "D'" << endl << "L'" << endl << "R" << endl << "F'" << endl <<"B" << endl;
    read(side);
    read(side);
    read(side);
    read(side);
    read(side);
    read(side);
}
void printCube(char cube[12][9]) {
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 9; j++) {
            if (cube[i][j] == 0) {
                cout << ' ';
            } else {
                cout << cube[i][j];
            }
        }
        cout << endl;
    }
}