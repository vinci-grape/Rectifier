#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool isValid(string s1, string s2) {
    int n1 = s1.length();
    int n2 = s2.length();
    unordered_map<char, bool> map;
    for (char c : s1) {
        map[c] = true;
    }
    for (char c : s2) {
        if (!map.count(c))
            return false;
    }
    return true;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (!isValid(s1, s2)) {
        cout << -1 << endl;
    } else {
        unordered_map<char, int> m1, m2;
        for (char c : s1) {
            m1[c]++;
        }
        for (char c : s2) {
            m2[c]++;
        }
        int ans = 0;
        unordered_set<char> hs;
        for (char c : s2) {
            if (!hs.count(c)) {
                hs.insert(c);
                int x1 = m1[c];
                int x2 = m2[c];
                x1 = min(x1, x2);
                ans += x1;
            }
        }
        cout << ans << endl;
    }

}