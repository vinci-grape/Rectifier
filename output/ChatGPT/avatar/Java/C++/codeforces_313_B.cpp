#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<int> calculateCumulative(string s) {
    vector<int> cum(s.length() + 1);
    cum[0] = cum[s.length()] = 0;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            cum[i] = cum[i - 1] + 1;
        } else {
            cum[i] = cum[i - 1];
        }
    }
    return cum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);
    vector<int> cum = calculateCumulative(s);
    
    int q;
    cin >> q;
    cin.ignore();

    while (q--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        int l, r;
        ss >> l >> r;
        cout << cum[r - 1] - cum[l - 2] << endl;
    }

    return 0;
}