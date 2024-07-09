#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    vector<int> a_li(N);
    for (int i = 0; i < N; i++) {
        cin >> a_li[i];
    }

    sort(a_li.begin(), a_li.end());

    int n = a_li[N - 1];

    int dif = INT_MAX;
    int prev_dif = dif;
    for (int a : a_li) {
        dif = min(abs(n / 2 - a), dif);
        if (dif!= prev_dif) {
            int r = a;
            prev_dif = dif;
        }
    }

    cout << n << " " << r << "\n";

    return 0;
}