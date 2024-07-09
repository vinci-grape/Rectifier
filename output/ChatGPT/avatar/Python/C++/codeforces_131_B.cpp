#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    unordered_map<int, int> w;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        w[num]++;
    }

    int c = 0;
    for (auto it = w.begin(); it != w.end(); it++) {
        int key = it->first;
        int value = it->second;

        if (key == 0) {
            c += value * (value - 1);
        } else {
            if (w.find(-key) != w.end()) {
                c += value * w[-key];
            }
        }
    }

    cout << c / 2 << endl;

    return 0;
}