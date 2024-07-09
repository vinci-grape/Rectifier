#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int R, G, B, N;
    cin >> R >> G >> B >> N;
    int score = 0;
    for (int i = 0; i < N / R + 1; ++i) {
        for (int j = 0; j < (N - i * R) / G + 1; ++j) {
            if (N - i * R - j * G >= 0 && (N - i * R - j * G) % B == 0) {
                score += 1;
            }
        }
    }
    cout << score << endl;
    return 0;
}