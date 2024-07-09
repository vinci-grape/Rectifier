#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> l;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        vector<char> row(s.begin(), s.end());
        for (int j = 0; j < m; j++) {
            if (row[j] == '.') {
                if ((i + j) & 1) row[j] = 'W';
                else row[j] = 'B';
            }
        }
        l.push_back(row);
    }
    for (auto c : l) {
        for (auto ch : c) {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}