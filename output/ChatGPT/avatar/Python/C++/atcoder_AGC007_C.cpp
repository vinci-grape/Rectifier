#include <iostream>
using namespace std;

int main() {
    int N, d, x;
    cin >> N >> d >> x;

    double ret = 0;
    while (N) {
        ret += d + (N - 0.5) * x;
        d = d + (d / N) + (5 * x) / (2 * N);
        x += 2 * x / N;
        N--;
    }

    cout << ret << endl;

    return 0;
}