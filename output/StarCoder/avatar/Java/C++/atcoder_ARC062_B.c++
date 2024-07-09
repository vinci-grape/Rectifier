#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int score = 0;
        for (int i = 0; i < s.length(); i++) {
            char my = i % 2 == 0? 'g' : 'p';
            char his = s[i];
            if (my!= his) {
                score += my == 'p'? 1 : -1;
            }
        }
        cout << score << "\n";
    }
    return 0;
}