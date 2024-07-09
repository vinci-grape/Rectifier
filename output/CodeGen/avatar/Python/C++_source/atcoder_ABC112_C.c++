#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    vector<vector<int> > ls_xyh(n);
    for ( int i = 0 ; i < n ; i++ ) {
        int x, y, h;
        cin >> x >> y >> h;
        ls_xyh[i] = {x, y, h};
    }
    string ans;
    for ( int i = 0 ; i < n ; i++ ) {
        int x0, y0, h0;
        x0 = y0 = h0 = 0;
        for ( int j = 0 ; j < n ; j++ ) {
            if ( ls_xyh[j][2] > 0 ) {
                x0 = ls_xyh[j][0];
                y0 = ls_xyh[j][1];
                h0 = ls_xyh[j][2];
                break;
            }
        }
        vector<int> cands(101*101, 0);
        for ( int cx = 0 ; cx < 101 ; cx++ ) {
            for ( int cy = 0 ; cy < 101 ; cy++ ) {
                int ch = h0 + abs(cx - x0) + abs(cy - y0);
                if ( ch > 0 ) {
                    cands[cx*101 + cy] = max(ch - abs(cx - x0) - abs(cy - y0), 0);
                }
            }
        }
        for ( int j = 0 ; j < n ; j++ ) {
            for ( int cx = 0 ; cx < 101 ; cx++ ) {
                for ( int cy = 0 ; cy < 101 ; cy++ ) {
                    int ch = cands[cx*101 + cy];
                    if ( ch == ls_xyh[j][2] ) {
                        cands[cx*101 + cy] = 0;
                    }
                }
            }
        }
        int xx = 0, yy = 0, hh = 0;
        for ( int cx = 0 ; cx < 101 ; cx++ ) {
            for ( int cy = 0 ; cy < 101 ; cy++ ) {
                if ( cands[cx*101 + cy] > 0 ) {
                    xx = cx;
                    yy = cy;
                    hh = cands[cx*101 + cy];
                    break;
                }
            }
        }
        ans += to_string(xx) + " " + to_string(yy) + " " + to_string(hh);
    }
    cout << ans << endl;
    return 0;
}