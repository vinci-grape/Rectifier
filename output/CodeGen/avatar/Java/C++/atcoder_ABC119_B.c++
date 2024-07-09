#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    int N;
    cin >> N;
    double x[N];
    string u[N];
    for (int i = 0; i < N; ++i) {
        cin >> x[i] >> u[i];
    }
    cout << fixed << setprecision(2) << (double)solve(x, u) << endl;
    return 0;
}

double solve(double x[], string u[]) {
    return IntStream.range(0, x.length).mapToDouble(i -> x[i] * (u[i].equals("JPY")? 1 : 380000)).sum();
}