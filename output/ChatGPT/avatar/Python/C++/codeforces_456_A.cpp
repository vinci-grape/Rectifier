#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> m(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            int x;
            cin >> x;
            m[i].push_back(x);
        }
    }
    sort(m.begin(), m.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] > b[0];
    });
    vector<int> a = m[0];
    for (int i = 1; i < n; i++) {
        if (m[i][1] > a[1]) {
            cout << "Happy Alex" << endl;
            break;
        }
        a = m[i];
    }
    if (a == m[n-1]) {
        cout << "Poor Alex" << endl;
    }
    
    return 0;
}