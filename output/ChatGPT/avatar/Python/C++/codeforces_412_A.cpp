#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string v;
    cin >> v;
    vector<string> d = {"LEFT", "RIGHT"};
    bool f = k - 1 < n - k;
    int m = min(k - 1, n - k);
    vector<string> a;
    for (int i = 0; i < m; i++) {
        a.push_back(d[!f]);
    }
    for (int i = v.size() - 1 + 2 * f; i >= 0 && i < v.size(); i += 2 * f - 1) {
        a.push_back("PRINT " + v[i]);
        a.push_back(d[f]);
    }
    for (int i = 0; i < a.size() - 1; i++) {
        cout << a[i] << endl;
    }


    return 0;
}