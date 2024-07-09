#include <iostream>
#include <string>
using namespace std;

int main() {
    int h, w, n, sr, sc;
    cin >> h >> w >> n >> sr >> sc;
    string s, t;
    cin >> s >> t;
    bool end = false;
    int usafe = 1;
    int dsafe = h;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == 'U') {
            usafe++;
        } else if (s[i] == 'D') {
            dsafe--;
        }
        if (usafe > dsafe) {
            end = true;
            break;
        }
        if (i > 0) {
            if (t[i - 1] == 'U') {
                dsafe = min(dsafe + 1, h);
            } else if (t[i - 1] == 'D') {
                usafe = max(usafe - 1, 1);
            }
        }
    }
    int lsafe = 1;
    int rsafe = w;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == 'L') {
            lsafe++;
        } else if (s[i] == 'R') {
            rsafe--;
        }
        if (lsafe > rsafe) {
            end = true;
            break;
        }
        if (i > 0) {
            if (t[i - 1] == 'L') {
                rsafe = min(rsafe + 1, w);
            } else if (t[i - 1] == 'R') {
                lsafe = max(lsafe - 1, 1);
            }
        }
    }
    if (sr >= usafe && sr <= dsafe && sc >= lsafe && sc <= rsafe && !end) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}