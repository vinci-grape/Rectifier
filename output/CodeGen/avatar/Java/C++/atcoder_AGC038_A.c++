#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
using namespace std;

int H, W, A, B;

int main() {
    scanf("%d%d%d%d", &H, &W, &A, &B);
    if (W < 2 * A || H < 2 * B) {
        cout << -1;
        return 0;
    }
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if ((i < B && j < A) || (i >= B) && (j >= A))
                cout << "0";
            else
                cout << "1";
        }
        cout << endl;
    }
    return 0;
}