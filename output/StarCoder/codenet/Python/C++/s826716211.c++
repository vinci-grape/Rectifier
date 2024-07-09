#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string S_d, T;
    cin >> S_d >> T;

    int end = S_d.size() - 1;
    int first = end - T.size() + 1;
    while (first >= 0) {
        int t_i = 0;
        for (int s_i = first; s_i <= end; s_i++) {
            if (T[t_i]!= S_d[s_i] && S_d[s_i]!= '?') {
                break;
            }
            t_i++;
        } else {
            break;
        }

        first--;
        end--;
    } else {
        cout << "UNRESTORABLE" << endl;
        exit(0);
    }

    string ans = S_d;
    int t_i = 0;
    for (int i = first; i <= end; i++) {
        ans[i] = T[t_i];
        t_i++;
    }

    ans = ans.replace("?", "a");
    cout << ans << endl;
}