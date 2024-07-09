#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int h, w, ka;
    cin >> h >> w >> ka;
    
    vector<vector<char>> mat(h, vector<char>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> mat[i][j];
        }
    }
    
    int ans = 0;
    for (int i = 0; i < pow(2, h + w); i++) {
        string b = bitset<16>(i).to_string().substr(16 - (h + w), h + w);
        string rs = b.substr(0, h);
        string cs = b.substr(h);
        int ct = 0;
        for (int l = 0; l < h; l++) {
            for (int k = 0; k < w; k++) {
                if (mat[l][k] == '#' && rs[l] == '0' && cs[k] == '0') {
                    ct++;
                }
            }
        }
        if (ct == ka) {
            ans++;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}