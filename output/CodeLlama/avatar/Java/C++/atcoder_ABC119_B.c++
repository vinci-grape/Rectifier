#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<double> x(N);
    vector<string> u(N);
    for (int i = 0; i < N; ++i) {
        cin >> x[i];
        cin >> u[i];
    }
    cout << solve(x, u) << endl;
}

double solve(vector<double> x, vector<string> u) {
    return accumulate(x.begin(), x.end(), 0.0, [&](double sum, double x) {
        return sum + x * (u[x] == "JPY" ? 1 : 380000);
    });
}