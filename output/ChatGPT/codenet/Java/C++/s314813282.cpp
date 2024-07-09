#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int MaxInt(int x, vector<int>& a) {
    int bignum = x;
    for (int i = 0; i < a.size(); i++) {
        bignum = max(bignum, a[i]);
    }
    return bignum;
}

int MinInt(int y, vector<int>& b) {
    int smallnum = y;
    for (int i = 0; i < b.size(); i++) {
        smallnum = min(smallnum, b[i]);
    }
    return smallnum;
}

void CheckWar(int a, int b) {
    if (a >= b) {
        cout << "War" << endl;
    }
    else {
        cout << "No War" << endl;
    }
}

int main() {
    int m, n, x, y;
    cin >> m >> n >> x >> y;
    
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    int x_max = MaxInt(x, a);
    int y_min = MinInt(y, b);
    CheckWar(x_max, y_min);
    
    return 0;
}