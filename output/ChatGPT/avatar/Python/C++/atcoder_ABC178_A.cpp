#include <iostream>
using namespace std;

void solve(int tc) {
    int a;
    cin >> a;
    cout << (a == 0 ? 1 : 0) << endl;
}

int main() {
    int tcs = 1;
    int tc = 1;
    while (tc <= tcs) {
        solve(tc);
        tc++;
    }
    return 0;
}