#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    vector<int> low(n), high(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        low[i] = a;
        high[i] = b;
    }
    sort(low.begin(), low.end());
    sort(high.begin(), high.end());
    if (n % 2) {
        cout << high[n / 2 - 1] - low[n / 2 - 1] + 1 << endl;
    } else {
        int hh = (high[n / 2 - 1] + high[n / 2]) / 2;
        int ll = (low[n / 2 - 1] + low[n / 2]) / 2;
        cout << (hh - ll) * 2 + 1 << endl;
    }
    return 0;
}