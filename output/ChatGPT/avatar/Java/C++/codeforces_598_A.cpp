#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        long long s = 0;
        int x = (int)(log(n) / log(2));
        x++;
        s = -1 * pow(2, x) + 2 + ((long long)n * (long long)(n + 1)) / 2 - pow(2, x);
        cout << s << endl;
    }
}