#include <iostream>
using namespace std;

int main() {
    int R, G, B, N;
    cin >> R >> G >> B >> N;
    int score = 0;
    for (int i = 0; i <= N / R; i++) {
        for (int j = 0; j <= (N - i * R) / G; j++) {
            if ((N - i * R - j * G) % B == 0) {
                score++;
            }
        }
    }
    cout << score << endl;
    return 0;
}