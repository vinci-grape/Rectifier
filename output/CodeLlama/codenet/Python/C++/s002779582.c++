#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> Hs(N);
    for (int i = 0; i < N; i++) {
        cin >> Hs[i];
    }

    int ans = 0;
    int maxH = 0;
    for (int H : Hs) {
        if (maxH <= H) {
            ans++;
            maxH = H;
        }
    }

    cout << ans << endl;
}