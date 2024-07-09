#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main ( ) {
    int x, y, z, k;
    cin >> x >> y >> z >> k;
    vector <int> a(x);
    for (int i = 0; i < x; ++i) {
        cin >> a[i];
    }
    vector <int> b(y);
    for (int i = 0; i < y; ++i) {
        cin >> b[i];
    }
    vector <int> c(z);
    for (int i = 0; i < z; ++i) {
        cin >> c[i];
    }
    vector <int> ab(x * y);
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            ab[i + j * x] = a[i] + b[j];
        }
    }
    sort(ab.begin(), ab.end(), greater<int>());
    vector <int> abc(min(k, x * y));
    for (int i = 0; i < min(k, x * y); ++i) {
        for (int j = 0; j < z; ++j) {
            abc[i] += ab[i + j * x] + c[j];
        }
    }
    sort(abc.begin(), abc.end(), greater<int>());
    for (int i = 0; i < k; ++i) {
        cout << abc[i] << endl;
    }
    return 0;
}