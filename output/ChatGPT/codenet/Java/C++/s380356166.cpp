#include <iostream>
using namespace std;

int main() {
    int ans = 0;
    int K, S, wk;
    cin >> K >> S;
    for(int x=0; x <= K; x++) {
        for(int y=0; y <= K; y++) {
            wk = S - x - y;
            if(wk >= 0 && wk <= K) {
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}