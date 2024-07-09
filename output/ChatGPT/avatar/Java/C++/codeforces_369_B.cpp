#include <iostream>
#include <vector>
using namespace std;

vector<int> getPoints(int n, int k, int l, int r, int sAll, int sk) {
    vector<int> ans(n, l);
    sAll -= sk + (n - k) * l;
    sk -= k * l;
    while (sk > 0) {
        int idx = n - 1;
        while (sk > 0 && idx >= n - k) {
            ans[idx--]++;
            sk--;
        }
    }
    while (sAll > 0) {
        int idx = 0;
        while (sAll > 0 && idx < n - k) {
            ans[idx++]++;
            sAll--;
        }
    }
    return ans;
}

int main() {
    int n, k, l, r, sAll, sk;
    cin >> n >> k >> l >> r >> sAll >> sk;
    vector<int> ans = getPoints(n, k, l, r, sAll, sk);
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;
}