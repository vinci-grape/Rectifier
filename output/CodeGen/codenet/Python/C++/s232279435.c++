#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        string x = s.substr(0, i + 1);
        string y = s.substr(i + 1);
        int z = 0;
        for (int j = 0; j < x.length(); j++) {
            if (x[j] in y) {
                z++;
            }
        }
        if (z > ans) {
            ans = z;
        }
    }
    cout << ans << endl;
    return 0;
}