# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <map>
# include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }
    if (mp['R'] > n - mp['R']) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}