#include <bits/stdc++.h>
using namespace std;

vector<int> find(string s, char ch) {
    vector<int> indices;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ch) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s.find('0') == string::npos) {
        cout << n - 1 << endl;
    } else {
        vector<int> indices = find(s, '0');
        if (indices.size() == 1) {
            cout << n << endl;
        } else {
            int maximum = 0;
            for (int i = 0; i < indices.size() - 1; i++) {
                for (int j = i + 1; j < indices.size(); j++) {
                    maximum = max(maximum, 2 + 2 * (abs(indices[i] - indices[j]) - 1) - (abs(indices[i] - indices[j]) - 1));
                }
            }
            cout << s.count('1') + maximum << endl;
        }
    }
    return 0;
}