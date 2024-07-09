#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    unordered_map<string, int> w;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        w[s[i]]++;
    }
    string a;
    int c = -1;
    for (auto it = w.begin(); it != w.end(); it++) {
        if (it->second == max_element(w.begin(), w.end(), [](auto a, auto b) { return a.second < b.second; })->second) {
            if (find(s.rbegin(), s.rend(), it->first) - s.rbegin() > c) {
                a = it->first;
                c = find(s.rbegin(), s.rend(), it->first) - s.rbegin();
            }
        }
    }
    cout << a << endl;

    return 0;
}