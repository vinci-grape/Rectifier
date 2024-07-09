#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s,t;
    cin >> s >> t;
    int ans = 10**6;
    for (int i = 0; i < s.length(); i++) {
        vector<int> a(s.length()-i);
        for (int j = 0; j < a.size(); j++) {
            a[j] = s[i+j];
        }
        if (t.length() >= a.size()) {
            ans = min(ans,check(t.substr(0,a.size()),a));
        }
    }
    cout << ans << endl;
    return 0;
}