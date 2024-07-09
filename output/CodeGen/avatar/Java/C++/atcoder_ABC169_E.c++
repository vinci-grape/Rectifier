#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int num = 998244353;
    vector<int> ai;
    vector<int> bi;
    for (int i = 0; i < 9; i++) {
        int a, b;
        cin >> a >> b;
        ai.push_back(a);
        bi.push_back(b);
    }
    sort(ai.begin(), ai.end());
    sort(bi.begin(), bi.end());
    if (9 % 2 == 1) {
        cout << bi[bi.size() / 2] - ai[ai.size() / 2] + 1;
    } else {
        double b = (ai[ai.size() / 2] + ai[ai.size() / 2 - 1] + 0.0) / 2;
        double c = (bi[bi.size() / 2] + bi[bi.size() / 2 - 1] + 0.0) / 2;
        cout << (int) (2 * (c - b) + 1);
    }
}