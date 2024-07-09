#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> c(n - 1);
    vector<int> s(n - 1);
    vector<int> f(n - 1);

    for (int i = 0; i < n - 1; i++) {
        cin >> c[i] >> s[i] >> f[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int time = s[i] + c[i];
        for (int j = i + 1; j < n - 1; j++) {
            if (time % f[j]!= 0) {
                time += f[j] - (time % f[j]);
            }

            if (time < s[j]) {
                time = s[j];
            }

            time += c[j];
        }

        cout << time << endl;
    }
    cout << 0 << endl;
    return 0;
}