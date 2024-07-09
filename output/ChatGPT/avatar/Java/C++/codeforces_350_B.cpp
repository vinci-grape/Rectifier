#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n+1), b(n+1), num(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    string ss = "";
    int ans = 0;
    vector<bool> st(n+1);
    for (int i = 1; i <= n; i++) {
        if (a[i] == 1) {
            st[i] = true;
            string sb = "";
            int x = b[i];
            string sss = to_string(i);
            reverse(sss.begin(), sss.end());
            sb += " " + sss;
            int s = 1;
            while (!st[x] && num[x] == 1 && x != 0 && a[x] != 1) {
                sss = to_string(x);
                reverse(sss.begin(), sss.end());
                sb += " " + sss;
                st[x] = true;
                x = b[x];
                s++;
            }
            if (s > ans) {
                ans = s;
                ss = sb;
            }
        }
    }
    cout << ans << endl;
    cout << ss << endl;
}