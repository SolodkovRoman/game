#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main()
{
    srand(time(NULL));
/*
    char pole[4][4];
    for (int a = 0; a<4; a++) {
        for (int b = 0; b<4; b++) {
            pole[a][b] = ' ';
        }
    }
*/
    char pole[4][4];
    pole[0][0] = '1';
    pole[0][1] = '2';
    pole[0][2] = '3';
    pole[0][3] = '4';
    pole[1][0] = '5';
    pole[1][1] = '6';
    pole[1][2] = '7';
    pole[1][3] = '8';
    pole[2][0] = '9';
    pole[2][1] = 'A';
    pole[2][2] = 'B';
    pole[2][3] = 'C';
    pole[3][0] = 'D';
    pole[3][1] = 'E';
    pole[3][2] = 'F';
    pole[3][3] = ' ';
    int x = 3;
    int y = 3;
    int x1;
    int y1;
    random_shuffle(&pole[0][0],&pole[3][3]);
    while (true) {
        system("cls");
        for (int a = 0; a<4; a++) {
            for (int b = 0; b<4; b++) {
                cout << pole[a][b] << ' ';
            }
            cout << endl;
        }
        char k;
        cout << "Enter 'w'(up), 's'(down), 'a'(left), 'd'(right)" << endl;
        cin >> k;
        x1 = x;
        y1 = y;
        switch(k) {
        case 's':
            if (y < 3) {
                y++;
            }
            break;
        case 'w':
            if (y > 0) {
                y--;
            }
            break;
        case 'd':
            if (x < 3) {
                x++;
            }
            break;
        case 'a':
            if (x > 0) {
                x--;
            }
            break;
        default:
            break;
        }
        char j = pole[y][x];
        pole[y][x] = ' ';
        pole[y1][x1] = j;
    }
/*
    int a = 0;
    int b = 0;
    for (int k = 0; k<16; k++) {
        a = rand()%16;
        b = rand()%16;
        if (pole[a][b] == ' ') {
            pole[a][b] = simvol[k];
        }

    }

    for (int a = 0; a<4; a++) {
        pole[a] = *new int [4];
    }

    int x;
    int y;
    for (int k = 0; k<4; k++) {
        for (int l = 0; l<4; l++) {
            int a = 0;
            pole[k][l] = rand() %16;
proverka:
            for (int m = 0; m<k; m++) {
                for (int n = 0; n<4; n++) {
                    while (pole[k][l] == pole[k-m][4-n] && l != 4-n && k != k-m) {
                        pole[k][l] = rand() %16;
                        a++;
                    }
                }
            }
            if (a > 0) {
                a = 0;
                goto proverka;
            }
        }
    }

    for (int k = 0; k<4; k++) {
        for (int l = 0; l<4; l++) {
            cout << pole[k][l] << ' ';
        }
        cout << endl;
    }
*/
    return 0;
}
