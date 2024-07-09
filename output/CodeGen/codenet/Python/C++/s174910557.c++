#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int ans = 1;
    char tmp = S[0];
    for (int i = 0; i < S.size(); i++) {
        if (S[i]!= tmp) {
            ans += 1;
            tmp = S[i];
        }
    }
    cout << ans << endl;
    return 0;
}