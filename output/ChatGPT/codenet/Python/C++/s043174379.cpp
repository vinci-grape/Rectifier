#include <iostream>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    int h, w;
    cin >> h >> w;
    int ans = H * W - (h * W + w * H - h * w);
    cout << ans << endl;

    return 0;
}