#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> c;
    vector<string> ls;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        ls.push_back(s);
        c[s]++;
    }
    int count = c.begin()->second;
    vector<string> ans;
    for (auto it = c.begin(); it != c.end(); it++) {
        if (it->second == count) {
            ans.push_back(it->first);
        }
    }
    sort(ans.begin(), ans.end());
    for (auto it = ans.begin(); it != ans.end(); it++) {
        cout << *it << endl;
    }
    return 0;
}