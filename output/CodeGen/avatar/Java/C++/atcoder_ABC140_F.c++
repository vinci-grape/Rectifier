#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s(1<<n);
    for (int i = 0; i < (1<<n); ++i) {
        cin >> s[i];
    }
    sort(s.begin(), s.end());
    vector<int> active(1<<n);
    active[(1<<n)-1] = s[(1<<n)-1];
    for (int i = 0; i < n; ++i) {
        active.sort(greater<int>());
        vector<int> activated(1<<n);
        int next = (1<<n)-1;
        for (int slime : active) {
            while (next >= 0 && (s[next] >= slime || s[next] == 0)) {
                next--;
            }
            if (next < 0) {
                cout << "No" << endl;
                return 0;
            }
            activated[next] = s[next];
        }
        active.insert(active.end(), activated.begin(), activated.end());
    }
    cout << "Yes" << endl;
    return 0;
}