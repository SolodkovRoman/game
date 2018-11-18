#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int pole[4][4];
/*
    for (int a = 0; a<4; a++) {
        pole[a] = *new int [4];
    }
*/
    int x;
    int y;
    for (int k = 0; k<4; k++) {
        for (int l = 0; l<4; l++) {
            pole[k][l] = rand() %16;
            for (int m = 0; m<k; m++) {
                for (int n = 1; n<l; n++) {
                    while (pole[k][l] == pole[k-m][l-n]) {
                        pole[k][l] = rand() %16;
                    }
                }
            }
            cout << pole[k][l];
        }
        cout << endl;
    }
/*
    for (int k = 0; k<4; k++) {
        for (int l = 0; l<4; l++) {
            cout << pole[k][l];
        }
        cout << endl;
    }
*/
    return 0;
}
