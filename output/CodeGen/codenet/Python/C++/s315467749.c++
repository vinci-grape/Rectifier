#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> S(n);
    for (int i = 0; i < n; i++) {
        cin >> S[i];
    }
    int q;
    cin >> q;
    vector<int> T(q);
    for (int i = 0; i < q; i++) {
        cin >> T[i];
    }
    int ans = 0;
    for (int i = 0; i < q; i++) {
        if (T[i] == S[n-1] || T[i] == S[0]) {
            ans++;
        }
        else {
            int left = 0;
            int right = n-1;
            while (right-left > 1) {
                int mid = (left+right)//2;
                if (S[mid] == T[i]) {
                    ans++;
                    break;
                }
                else if (S[mid] < T[i]) {
                    left = mid;
                }
                else {
                    right = mid;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}