#include <iostream>
#include <cstdlib>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        if (m.find(num) == m.end()) {
            m[num] = 1;
        } else {
            m[num]++;
        }
    }
    int ans = 0;
    for (auto it = m.begin(); it!= m.end(); ++it) {
        ans += it->second;
    }
    cout << ans << endl;
    return 0;
}