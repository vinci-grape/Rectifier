#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> bb(n);
    for (int i = 0; i < n; i++) cin >> bb[i];
    vector<int> aa(n);
    int m = 0;
    for (int a = n - 1; a >= 0; a--) {
        int j = 0;
        while (bb[a] > 0) {
            if (aa[j] >= a + k) bb[a]--;
            j++;
        }
        for (int j_ = m++; j_ > j; j_--) aa[j_] = aa[j_ - 1];
        aa[j] = a;
    }
    for (int i = 0; i < n; i++) cout << aa[i] + 1 << " ";
    cout << endl;
}