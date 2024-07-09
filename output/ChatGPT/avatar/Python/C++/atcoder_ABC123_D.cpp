#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int x, y, z, k;
    cin >> x >> y >> z >> k;

    vector<int> a(x), b(y), c(z);
    for (int i = 0; i < x; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < y; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < z; i++) {
        cin >> c[i];
    }

    vector<int> ab;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            ab.push_back(a[i] + b[j]);
        }
    }
    sort(ab.rbegin(), ab.rend());

    vector<int> abc;
    for (int i = 0; i < min(k, x * y); i++) {
        for (int j = 0; j < z; j++) {
            abc.push_back(ab[i] + c[j]);
        }
    }
    sort(abc.rbegin(), abc.rend());

    for (int i = 0; i < k; i++) {
        cout << abc[i] << endl;
    }

    return 0;
}