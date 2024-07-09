#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 200 + 10;
int f[N];
char b[N];
void getFail(char b[], int m) {
    int j = 0;
    f[0] = f[1] = 0;
    for (int i = 2; i <= m; i++) {
        while (j > 0 && b[j + 1] != b[i]) j = f[j];
        if (b[j + 1] == b[i]) j++;
        f[i] = j;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    string s1, str;
    cin >> s1 >> str;
    int cnt = 0;
    for (int i = 0; i < n; i++) b[++cnt] = str[i];
    for (int i = 0; i < n; i++) b[++cnt] = s1[i];
    getFail(b, cnt);
    int len = min(f[cnt], min(n, n));
    cout << 2 * n - len << endl;
    return 0;
}