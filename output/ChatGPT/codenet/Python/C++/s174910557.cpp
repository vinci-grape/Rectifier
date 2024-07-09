#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int ans = 1;
    char tmp = S[0];
    for (char s : S) {
        if (s != tmp) {
            ans += 1;
            tmp = s;
        }
    }

    cout << ans << endl;

    return 0;
}