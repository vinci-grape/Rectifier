#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cin >> n;
    string input;
    cin >> input;
    int max = -1;
    int count = 0;
    int idx = 0;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '.' || input[i] == '?' || input[i] == '!') {
            count++;
            if (count > max) max = count;
            i++;
            count = 0;
        } else {
            count++;
        }
    }
    if (max > n) cout << "Impossible" << endl;
    else {
        int ans = 0;
        for (int i = 0; i < idx; i++) {
            int l = count;
            while (i < idx - 1 && l + count + 1 <= n) {
                l += count + 1;
                i++;
            }
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}