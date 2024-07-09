#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    char S[H][W];
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> S[i][j];
        }
    }
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (S[i][j] == '.') {
                int count = 0;
                for (int a = -1; a <= 1; a++) {
                    if (i + a < 0 || H <= i + a) {
                        continue;
                    }
                    for (int b = -1; b <= 1; b++) {
                        if (j + b < 0 || W <= j + b) {
                            continue;
                        }
                        if ( S[i + a][j + b] == '#') {
                            count++;
                        }
                    }
                }
                S[i][j] = (char)(count+48);
            }
            printf("%c", S[i][j]);
        }
        printf("\n");
    }
    return 0;
}