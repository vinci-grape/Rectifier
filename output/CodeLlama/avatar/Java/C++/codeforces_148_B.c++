#include <iostream>

using namespace std;

int main() {
    double VP, VD, T, F, C;
    cin >> VP >> VD >> T >> F >> C;
    if (VD <= VP) {
        cout << "0" << endl;
        return 0;
    }
    int answer = 0;
    double start = T;
    while (true) {
        double x = start * VP / (VD - VP);
        if ((start + x) * VP >= C) {
            break;
        }
        start += 2 * x + F;
        answer++;
    }
    cout << answer << endl;
    return 0;
}