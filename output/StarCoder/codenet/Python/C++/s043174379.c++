#include <iostream>
using namespace std;
int main() {
    int H, W, h, w, ans;
    cin >> H >> W >> h >> w;
    ans = H * W - (h * W + w * H - h * w);
    cout << ans << endl;
    return 0;
}