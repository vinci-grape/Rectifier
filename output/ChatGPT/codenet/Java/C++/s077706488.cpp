#include <iostream>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    int m[N];
    cin >> m[0];
    X -= m[0];
    int min = m[0];
    for(int i = 1; i < N; i++) {
        cin >> m[i];
        X -= m[i];
        if(m[i] < min) {
            min = m[i];
        }
    }
    cout << N+X/min << endl;

    return 0;
}