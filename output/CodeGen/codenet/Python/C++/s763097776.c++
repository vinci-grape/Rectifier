#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (p[i]!= p[i]) {
            count++;
        }
    }
    if (count == 0 || count == 2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}