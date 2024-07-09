#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    float res = 0;
    for (int i = 0; i < n; i++) {
        string x, u;
        cin >> x >> u;
        if (u == "BTC") {
            res += stof(x) * 380000;
        } else {
            res += stoi(x);
        }
    }
    cout << res;
    return 0;
}