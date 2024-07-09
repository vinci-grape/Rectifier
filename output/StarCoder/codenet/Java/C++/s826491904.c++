#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    int max, min; max = min = cin >> 1;
    for (int i = 1; i < N; i++) {
        int in; cin >> in;
        max = max > in? max : in;
        min = min < in? min : in;
    }
    cout << max - min;
    return 0;
}