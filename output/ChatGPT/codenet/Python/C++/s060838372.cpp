#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    if (S[K-1] == 'A') {
        S[K-1] = 'a';
    } else if (S[K-1] == 'B') {
        S[K-1] = 'b';
    } else {
        S[K-1] = 'c';
    }

    string ans = S;
    cout << ans << endl;

    return 0;
}