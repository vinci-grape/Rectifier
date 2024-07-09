#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    double x[N];
    string u[N];
    for (int i = 0; i < N; i++) {
        cin >> x[i];
        cin >> u[i];
    }
    cout << solve(x, u) << endl;
}

double solve(double x[], string u[]) {
    double ans = 0;
    for (int i = 0; i < N; i++) {
        if (u[i] == "JPY") {
            ans += x[i];
        } else {
            ans += x[i] * 380000;
        }
    }
    return ans;
}