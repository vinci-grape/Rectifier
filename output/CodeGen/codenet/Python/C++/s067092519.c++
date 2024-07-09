#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> m(10);
    for (int i = 0; i < N; ++i) {
        int b, f, r, v;
        cin >> b >> f >> r >> v;
        m[b - 1] += v;
        m[f - 1] += v;
        m[r - 1] += v;
    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 10; ++k) {
                cout << m[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}