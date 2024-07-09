#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string S_d, T;
    cin >> S_d >> T;

    int end = S_d.size() - 1;
    int first = end - T.size() + 1;
    while (first >= 0) {
        int t_i = 0;
        for (int s_i = first; s_i <= end; s_i++) {
            if (T[t_i] != S_d[s_i] && S_d[s_i] != '?') {
                break;
            }
            t_i++;
        }
        if (t_i == T.size()) {
            break;
        }

        first--;
        end--;
    }

    if (first < 0) {
        cout << "UNRESTORABLE" << endl;
        return 0;
    }

    string ans = S_d;
    int t_i = 0;
    for (int i = first; i <= end; i++) {
        ans[i] = T[t_i];
        t_i++;
    }

    replace(ans.begin(), ans.end(), '?', 'a');
    cout << ans << endl;

    return 0;
}