#include <iostream>
#include <string>
using namespace std;

int main() {
    string S_d, T;
    cin >> S_d >> T;
    int end = S_d.length() - 1;
    int first = end - T.length() + 1;
    while (first >= 0) {
        int t_i = 0;
        for (int s_i = first; s_i <= end; ++s_i) {
            if (T[t_i]!= S_d[s_i] && S_d[s_i]!= '?') {
                break;
            }
            t_i++;
        }
        if (t_i == T.length()) {
            first--;
            end--;
        }
    }
    else {
        cout << "UNRESTORABLE";
        return 0;
    }
    string ans = S_d;
    for (int i = first; i <= end; ++i) {
        ans[i] = T[0];
    }
    ans = ans.replace('?', 'a');
    cout << ans << endl;
    return 0;
}