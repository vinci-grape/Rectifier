#include <iostream>
#include <string>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

class codeforces_408_B {
public:
    void run() {
        string s1, s2;
        cin >> s1 >> s2;
        if (isValid(s1, s2) == false) {
            cout << -1;
        } else {
            map<char, int> m1;
            map<char, int> m2;
            for (char c : s1) {
                if (m1.find(c)!= m1.end()) {
                    m1[c]++;
                } else {
                    m1[c] = 1;
                }
            }
            for (char c : s2) {
                if (m2.find(c)!= m2.end()) {
                    m2[c]++;
                } else {
                    m2[c] = 1;
                }
            }
            int ans = 0;
            set<char> hs;
            for (char c : s2) {
                if (hs.find(c) == hs.end()) {
                    hs.insert(c);
                    int x1 = m1[c];
                    int x2 = m2[c];
                    x1 = min(x1, x2);
                    ans += x1;
                }
            }
            cout << ans;
        }
    }
private:
    bool isValid(string s1, string s2) {
        int n1 = s1.length();
        int n2 = s2.length();
        if (n1!= n2) return false;
        map<char, bool> map;
        for (char c : s1) {
            if (map.find(c)!= map.end()) return false;
            map[c] = true;
        }
        for (char c : s2) {
            if (map.find(c) == map.end()) return false;
        }
        return true;
    }
};

int main() {
    codeforces_408_B s;
    s.run();
    return 0;
}