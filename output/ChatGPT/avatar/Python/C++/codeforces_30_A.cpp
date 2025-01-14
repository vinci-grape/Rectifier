#include <iostream>
#include <cmath>

using namespace std;

int task4(int A, int B, int n) {
    for (int X = -1000; X <= 1000; X++) {
        if (A * pow(X, n) == B) {
            return X;
        }
    }
    return -1; // No solution
}

int main() {
    int A, B, n;
    cin >> A >> B >> n;
    cout << task4(A, B, n) << endl;

    return 0;
}