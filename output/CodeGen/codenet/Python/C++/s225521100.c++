#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        vector<int> aa(d);
        for (int j = 0; j < d; j++) {
            int x;
            cin >> x;
            aa[j] = x - 1;
        }
        sort(aa.begin(), aa.end());
        for (int j = 0; j < d; j++) {
            a[aa[j]] = 1;
        }
    }
    int nn = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            nn++;
        }
    }
    cout << nn << endl;
    return 0;
}