#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> s(N);
    vector<int> t(N);

    for (int i = 0; i < N; i++) {
        cin >> s[i] >> t[i];
    }

    string X;
    cin >> X;
    int xi = 0;

    for (int i = 0; i < N; i++) {
        if (s[i] == X) {
            xi = i;
            break;
        }
    }

    int ans = 0;

    for (int i = 0; i < N; i++) {
        if (xi < i) {
            ans += t[i];
        }
    }

    cout << ans << endl;

    return 0;
}