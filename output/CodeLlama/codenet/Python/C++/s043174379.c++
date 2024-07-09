#include <iostream>
using namespace std;
int main()
{
    int H, W, h, w;
    cin >> H >> W;
    cin >> h >> w;
    int ans = H * W - (h * W + w * H - h * w);
    cout << ans << endl;
    return 0;
}