#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(int x, int n) {
    int max = n * 2 - 1;
    if (x == 1 || x == max) {
        cout << "No" << endl;
        return;
    }
    cout << "Yes" << endl;
    string ans;
    for (int i = x + n - 1; i < x + n + max - 1; i++) {
        ans += to_string((i % max) + 1);
        ans += "\n";
    }
    cout << ans;
}

int main() {
    int n, x;
    cin >> n >> x;
    print(x, n);
    return 0;
}