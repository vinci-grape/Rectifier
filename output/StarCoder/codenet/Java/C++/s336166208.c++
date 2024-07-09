#include <iostream>
using namespace std;

int main() {
    int info[4][3][10];
    for (int i = 0; i < 4; i ++) {
        for (int j = 0; j < 3; j ++) {
            for (int k = 0; k < 10; k ++) { info[i][j][k] = 0; }
        }
    }

    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        int built, floor, room, num;
        cin >> built >> floor >> room >> num;
        info[built - 1][floor - 1][room - 1] += num;
    }

    for (int i = 0; i < 4; i ++) {
        for (int j = 0; j < 3; j ++) {
            for (int k = 0; k < 10; k ++) {
                cout << " " << info[i][j][k];
            }
            cout << "\n";
        }
        if (i!= 4 - 1) { cout << "####################\n"; }
    }

    return 0;
}