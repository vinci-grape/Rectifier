#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int m[368] = {0};
    int f[368] = {0};
    for (int i = 0; i < N; i++) {
        char x;
        int a, b;
        cin >> x >> a >> b;
        a--;
        b--;
        if (x == 'M') {
            m[a] += 2;
            m[b] -= 2;
        } else {
            f[a] += 2;
            f[b] -= 2;
        }
    }
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < 368; i++) {
        a += m[i];
        b += f[i];
        if (min(a, b) > c) {
            c = min(a, b);
        }
    }
    cout << c << endl;
    return 0;
}