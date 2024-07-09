#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    char ss[n][1000];
    for (int i = 0; i < n; i++)
        cin >> ss[i];
    char cc[1000];
    cin >> cc;
    int m = strlen(cc);
    char c, c_, a, a_;
    cin >> c;
    c_ = toupper(c);
    a = c == 'a'? 'b' : 'a';
    a_ = toupper(a);
    bool lucky[m];
    for (int j = 0; j < m; j++)
        for (int i = 0; i < n; i++) {
            int l = strlen(ss[i]);
            if (m - j >= l &&!strcmp(cc + j, ss[i]))
                for (int h = 0; h < l; h++)
                    lucky[j + h] = true;
        }
    for (int j = 0; j < m; j++)
        if (lucky[j]) {
            if (tolower(cc[j]) == c)
                cc[j] = isupper(cc[j])? a_ : a;
            else
                cc[j] = isupper(cc[j])? c_ : c;
        }
    cout << cc;
    return 0;
}