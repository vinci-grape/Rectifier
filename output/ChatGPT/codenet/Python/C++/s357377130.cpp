#include <iostream>
using namespace std;

int main() {
    int A, B, K;
    cin >> A >> B >> K;

    if (A + K - 1 >= B - K + 1) {
        while (A <= B) {
            cout << A << endl;
            A += 1;
        }
    } else {
        int i = 0;
        while (i <= K - 1) {
            cout << A + i << endl;
            i += 1;
        }
        while (B - K + 1 <= B) {
            cout << B - K + 1 << endl;
            K -= 1;
        }
    }

    return 0;
}