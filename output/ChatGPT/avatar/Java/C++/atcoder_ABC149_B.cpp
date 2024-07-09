#include <iostream>
using namespace std;

class atcoder_ABC149_B {
    long long A, B, K;
    long long x, y;

public:
    atcoder_ABC149_B(long long a, long long b, long long k) {
        A = a;
        B = b;
        K = k;
    }

    void calc() {
        x = A;
        y = B;
        x = A - K;
        if (x < 0) {
            y = B + x;
            x = 0;
            if (y < 0) {
                y = 0;
            }
        }
    }

    void showResult() {
        cout << x << " " << y << endl;
    }
};

int main() {
    long long A, B, K;
    cin >> A >> B >> K;

    atcoder_ABC149_B ins(A, B, K);
    ins.calc();
    ins.showResult();

    return 0;
}